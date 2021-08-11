//
// Created by gio on 08/08/21.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "Time.h"
#include "Date.h"

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

private:
    Ui::MainWindow *ui;
    QTimer *updater;
    Time *timeKeeper;
    Date *dateKeeper;
};
#endif // MAINWINDOW_H
