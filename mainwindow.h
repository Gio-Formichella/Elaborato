//
// Created by gio on 08/08/21.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <memory>
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

    void on_changeTimeFormat_clicked();

    void on_changeDateFormat_clicked();

    void on_setTimerButton_clicked();

    void on_start_stopButton_clicked();

    void timeIsUpWarning();

private:
    Ui::MainWindow *ui;
    QTimer *updater;
    std::unique_ptr<Time> timeKeeper;
    std::unique_ptr<Date> dateKeeper;
    Timer *timerKeeper;
};
#endif // MAINWINDOW_H
