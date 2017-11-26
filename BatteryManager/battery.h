#ifndef BATTERY_H
#define BATTERY_H

#include <QString>
#include <QFile>

class Battery
{
public:
    Battery();

    QString getStatus();
    int getChargePercents();
    QString getTimeUntilEmpty();
    void updateBatteryInfo();

private:
    QString batteryStatus;
    int chargePercents;
    double timeLeft;

    int energy_full;
    int energy_now;
    int power_now;

    void setStatus();
    void setCurrentBatteryInfo();
};

#endif // BATTERY_H
