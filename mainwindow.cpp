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
    timerKeeper = new Timer;

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
    delete timerKeeper;
}

void MainWindow::UpdateInfo() {
    ui->timeLabel->setText(QTime::currentTime().toString(QString::fromStdString(timeKeeper->GetTimeFormat())));
    ui->dateLabel->setText(QDate::currentDate().toString(QString::fromStdString(dateKeeper->GetDateFormat())));
    //ui->dateLabel->setText()
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


void MainWindow::on_setTimerButton_clicked()
{

}

