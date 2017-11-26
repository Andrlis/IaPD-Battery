#include "updatethread.h"

UpdateThread::UpdateThread(QObject *parent) : QObject(parent){

}

void UpdateThread::doUpdate(){
    while(true){
        emit this->update();
        usleep(2500000);
    }
}
