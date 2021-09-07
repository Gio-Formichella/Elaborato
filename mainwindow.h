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
    void updateInfo();

    void on_setTimerButton_clicked();

    void on_start_stopButton_clicked();

    void timeIsUpWarning();

    void on_dateFormat1Button_clicked();

    void on_dateFormat2Button_clicked();

    void on_dateFormat3Button_clicked();

    void on_timeFormat1Button_clicked();

    void on_timeFormat2Button_clicked();

    void on_timeFormat3Button_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *updater;
    std::unique_ptr<Time> timeKeeper;
    std::unique_ptr<Date> dateKeeper;
    Timer *timerKeeper;

    QString dateFormat;
    QString timeFormat;
};
#endif // MAINWINDOW_H
