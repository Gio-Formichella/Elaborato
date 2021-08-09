//
// Created by gio on 08/08/21.
//

#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    //updating current time every second
    updater = new QTimer(this);
    QObject::connect(updater,SIGNAL(timeout()),this,SLOT(UpdateTime()));
    updater->start(1000);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::UpdateTime() {
    ui->timeLabel->setText(QTime::currentTime().toString("hh:mm.ss"));
}
