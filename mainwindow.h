//
// Created by gio on 08/08/21.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "Time.h"
#include "Date.h"
#include "Timer.h"

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
    void UpdateInfo();

    void on_ChangeTimeFormat_clicked();

    void on_ChangeDateFormat_clicked();

    void on_setTimerButton_clicked();

    void on_start_stopButton_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *updater;
    Time *timeKeeper;
    Date *dateKeeper;
    Timer *timerKeeper;
};
#endif // MAINWINDOW_H
