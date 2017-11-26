#include "displaycontroller.h"

DisplayController::DisplayController()
{
    this->timeToDisplayOff = 0;
    QProcess process;
    process.start("dconf read /org/gnome/settings-daemon/plugins/power/sleep-inactive-battery-timeout ");
    process.waitForFinished(2000);

    defaultTime = (process.readAllStandardOutput());
    defaultTime.remove(defaultTime.length() - 1, 1);
}

void DisplayController::setTimeToDisplayOff(int time){
    this->timeToDisplayOff = time;
}

void DisplayController::enableOff(){
    QString comand = "dconf write /org/gnome/settings-daemon/plugins/power/sleep-inactive-battery-timeout ";
    comand += QString::number(this->timeToDisplayOff);

    system(comand.toStdString().c_str());
}

void DisplayController::disableOff(){
    system("dconf write /org/gnome/settings-daemon/plugins/power/sleep-inactive-battery-timeout 0");
}

void DisplayController::setDefaultTime()
{
    QString comand = "dconf write /org/gnome/settings-daemon/plugins/power/sleep-inactive-battery-timeout ";
    comand += (defaultTime == "") ? 0 : defaultTime;

    system(comand.toStdString().c_str());
}

