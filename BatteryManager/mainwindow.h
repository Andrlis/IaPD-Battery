#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QThread>

#include "battery.h"
#include "updatethread.h"
#include "displaycontroller.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void update();
    void checkStatus();

private slots:

    void on_timeToOff_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    Battery *battery;
    UpdateThread *updateThread;
    DisplayController *displayController;

    void setValues();
    void closeEvent(QCloseEvent *);
};

#endif // MAINWINDOW_H
