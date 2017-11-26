#ifndef DISPLAYCONTROLLER_H
#define DISPLAYCONTROLLER_H

#include <QString>
#include <stdio.h>
#include <QProcess>

class DisplayController
{
private:
    int timeToDisplayOff;
    QString defaultTime;
public:
    DisplayController();
    void setTimeToDisplayOff(int);
    void enableOff();
    void disableOff();
    void setDefaultTime();
};

#endif // DISPLAYCONTROLLER_H
