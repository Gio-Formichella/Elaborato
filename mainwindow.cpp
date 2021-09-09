//
// Created by gio on 08/08/21.
//

#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow),timeKeeper(new Time),dateKeeper(new Date),timerKeeper(new Timer),
        timeFormat("hh:mm:ss"), dateFormat("dd.MM.yyyy") {

    ui->setupUi(this);

    //updating time/date info every second
    updater = new QTimer(this);
    QObject::connect(updater,SIGNAL(timeout()),this,SLOT(updateInfo()));

    updater->start(1000);
}

MainWindow::~MainWindow() {
    delete ui;
    delete updater;
    delete timerKeeper;
}

void MainWindow::updateInfo() {
    int h,m,s;
    currentQTimeToTime(h,m,s);
    timeKeeper->setTime(h,m,s);
    ui->timeLabel->setText(timeKeeper->showTime());
    try{
        dateKeeper->setDate(QDate::currentDate());
    }catch (std::invalid_argument& e){
        std::cerr << e.what() << std::endl;
    }
    ui->dateLabel->setText(dateKeeper->showDate(dateFormat));
    if (timerKeeper->isTimerActive())
        ui->timerLabel->setText(timerKeeper->showRemainingTime());
}

void MainWindow::on_setTimerButton_clicked(){
    ui->timerLabel->clear();

    QString input = ui->setTimerIntervalInput->text();
    QTime timeInput = QTime::fromString(input);

    if (timeInput.isValid()) {
        timerKeeper->setTimer(timeInput);
        ui->timerLabel->setText(timeInput.toString());
    }
    else {
        ui->timerLabel->setText("Invalid time");
    }
    ui->setTimerIntervalInput->clear();
}

void MainWindow::on_start_stopButton_clicked(){
    if(! timerKeeper->isTimerActive()){
        timerKeeper->startTimer();
        QObject::connect(timerKeeper->timer,SIGNAL(timeout()),this,SLOT(timeIsUpWarning()));
    }
    else{
        timerKeeper->pause();
    }
}

void MainWindow::timeIsUpWarning() {
    timerKeeper->stopTimer();
    ui->timerLabel->setText("Time's up!");
}

void MainWindow::on_dateFormat1Button_clicked(){
    dateFormat = "dd.MM.yy";
    updateInfo();
}


void MainWindow::on_dateFormat2Button_clicked(){
    dateFormat = "dddd MMM d";
    updateInfo();
}


void MainWindow::on_dateFormat3Button_clicked(){
    dateFormat = "dd.MM.yyyy";
    updateInfo();
}


void MainWindow::on_timeFormat1Button_clicked()
{
    timeKeeper->changeFormat(TimeFormat::format1);
    updateInfo();
}


void MainWindow::on_timeFormat2Button_clicked()
{
    timeKeeper->changeFormat(TimeFormat::format2);
    updateInfo();
}


void MainWindow::on_timeFormat3Button_clicked()
{
    timeKeeper->changeFormat(TimeFormat::format3);
    updateInfo();
}

void MainWindow::currentQTimeToTime(int &h, int &m, int &s) const {
    QTime q = QTime::currentTime();
    int msec = q.msecsSinceStartOfDay();
    s = msec/1000;
    m = s/60;
    h = m/60;
    s=s%60;
    m=m%60;
}

