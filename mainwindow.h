//
// Created by gio on 08/08/21.
//

#ifndef ELABORATO_MAINWINDOW_H
#define ELABORATO_MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
};

#endif //ELABORATO_MAINWINDOW_H
