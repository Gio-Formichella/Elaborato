//
// Created by gio on 08/08/21.
//

#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    timeKeeper = new Time;
    dateKeeper = new Date;

    //updating time/date info every second
    updater = new QTimer(this);
    QObject::connect(updater,SIGNAL(timeout()),this,SLOT(UpdateInfo()));
    updater->start(1000);
}

MainWindow::~MainWindow() {
    delete ui;
    delete updater;
    delete timeKeeper;
    delete dateKeeper;
}

void MainWindow::UpdateInfo() {
    ui->timeLabel->setText(QTime::currentTime().toString(QString::fromStdString(timeKeeper->GetTimeFormat())));
    ui->dateLabel->setText(QDate::currentDate().toString(QString::fromStdString(dateKeeper->GetDateFormat())));
    //ui->timerLabel->setText(timerKeeper->RemainingTime());
}

void MainWindow::on_ChangeTimeFormat_clicked()
{
    timeKeeper->ChangeTimeFormat();
    UpdateInfo();
}


void MainWindow::on_ChangeDateFormat_clicked()
{
    dateKeeper->ChangeDateFormat();
    UpdateInfo();
}


void MainWindow::on_setTimerButton_clicked(){
    ui->timerLabel->clear();
    QString input = ui->setTimerIntervalInput->text();
    QTime timeInput = QTime::fromString(input);
    if (timeInput.isValid()) {
        timerKeeper = new Timer;
        timerKeeper->setInterval((-1) * timeInput.msecsTo(QTime(0, 0, 0, 0)));
        ui->timerLabel->setText(timeInput.toString());
    }
    else {
        ui->timerLabel->setText("invalid time");
    }
    ui->setTimerIntervalInput->clear();
}