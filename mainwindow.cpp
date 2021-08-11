//
// Created by gio on 08/08/21.
//

#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    timeKeeper = new Time;
    //updating current time every second
    updater = new QTimer(this);
    QObject::connect(updater,SIGNAL(timeout()),this,SLOT(UpdateTime()));
    updater->start(1000);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::UpdateTime() {
    ui->timeLabel->setText(QTime::currentTime().toString(QString::fromStdString(timeKeeper->GetTimeFormat())));
}

void MainWindow::on_ChangeTimeFormat_clicked()
{
    timeKeeper->ChangeTimeFormat();
    UpdateTime();
}

