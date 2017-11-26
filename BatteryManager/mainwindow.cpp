#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    battery = new Battery();
    displayController = new DisplayController();

    QThread *uThread = new QThread;
    updateThread = new UpdateThread();
    updateThread->moveToThread(uThread);

    ui->setupUi(this);
    this->setWindowTitle("Battery Controller");

    this->setValues();

    connect(this->updateThread,SIGNAL(update()),this,SLOT(update()));
    connect(uThread, SIGNAL(started()), this->updateThread, SLOT(doUpdate()));

    uThread->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *){
    displayController->disableOff();
}

void MainWindow::setValues(){
    ui->connectionEdit->setText(battery->getStatus());
    ui->timeEdit->setText(battery->getTimeUntilEmpty());
    ui->chargeindicator->setValue(battery->getChargePercents());
}

void MainWindow::update(){
    ui->timeToOff->setEnabled(true);
    this->battery->updateBatteryInfo();
    this->setValues();

    this->checkStatus();
}

void MainWindow::checkStatus(){
    if(battery->getStatus() == "AC") {
        displayController->disableOff();
        ui->timeToOff->setCurrentIndex(0);
        ui->timeToOff->setEnabled(false);
    }
}

void MainWindow::on_timeToOff_currentIndexChanged(int index)
{
    if(index < 7){
        if(index == 1){
            displayController->setTimeToDisplayOff(5);
        }
        else{
            displayController->setTimeToDisplayOff(index * 60);
        }
    }
    else{
        displayController->setTimeToDisplayOff(600);
    }
    displayController->enableOff();
}
