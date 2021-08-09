//
// Created by gio on 08/08/21.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "Time.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void UpdateTime();

private:
    Ui::MainWindow *ui;
    QTimer *updater;
    Time *timeKeeper;
};
#endif // MAINWINDOW_H
