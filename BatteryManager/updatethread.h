#ifndef UPDATETHREAD_H
#define UPDATETHREAD_H

#include <QObject>
#include <unistd.h>

class UpdateThread: public QObject
{
    Q_OBJECT
public:
    explicit UpdateThread(QObject *parent = 0);
signals:
    void update();
public slots:
    void doUpdate();
};

#endif // UPDATETHREAD_H
