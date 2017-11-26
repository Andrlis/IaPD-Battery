#include "battery.h"

Battery::Battery()
{
    this->setStatus();

    this->setCurrentBatteryInfo();

}

QString Battery::getStatus(){
    return this->batteryStatus;
}

int Battery::getChargePercents(){
    return this->chargePercents;
}

QString Battery::getTimeUntilEmpty(){
    int h = (int)(this->timeLeft);
    int m = (int)((this->timeLeft-(int)this->timeLeft)*60);

    QString answer = "";
    if(h != 0){
        answer+=QString::number(h)+" h. ";
    }
    answer+=QString::number(m)+" min.";


    if(this->batteryStatus == "AC")
        answer+=" until full";
    else
        answer+=" until empty";
    return  answer;
}

void Battery::setStatus(){
    QFile * statusFile = new QFile("/sys/class/power_supply/BAT0/status");

    if(!statusFile->open(QIODevice::ReadOnly)){
            return;
    }

    QString temp = statusFile->readAll();

    if(temp.startsWith("Discharging"))
        this->batteryStatus = "Battery";
    else
        this->batteryStatus = "AC";

    statusFile->close();
}

void Battery::setCurrentBatteryInfo(){

    QFile * ueventFile = new QFile("/sys/class/power_supply/BAT0/uevent");

    if(!ueventFile->open(QIODevice::ReadOnly)){
       return;
    }

    while(!ueventFile->NoError) {
    QString temp = ueventFile->readLine(50);

        if(temp.startsWith("POWER_SUPPLY_CURRENT_NOW")){
            temp = temp.remove("POWER_SUPPLY_CURRENT_NOW=");
            this->power_now = temp.toInt();
            continue;
        }
        if(temp.startsWith("POWER_SUPPLY_CHARGE_FULL")){
            temp = temp.remove("POWER_SUPPLY_CHARGE_FULL=");
            this->energy_full = temp.toInt();
            continue;
        }
        if(temp.startsWith("POWER_SUPPLY_CHARGE_NOW")){
            temp = temp.remove("POWER_SUPPLY_CHARGE_NOW=");
            this->energy_now = temp.toInt();
            continue;
        }
        if(temp.startsWith("POWER_SUPPLY_CAPACITY")){
            temp = temp.remove("POWER_SUPPLY_CAPACITY=");
            this->chargePercents = temp.toInt();
            break;
        }
    }


    if(this->power_now != 0){
        if(this->batteryStatus == "AC"){
            this->timeLeft = ((double)this->energy_full - this->energy_now)/this->power_now;
        }
        else{
            this->timeLeft = (double)this->energy_now / this->power_now;
        }
    }
    else{
        this->timeLeft = 0;
    }


}

void Battery::updateBatteryInfo(){
    this->setStatus();
    this->setCurrentBatteryInfo();
}
