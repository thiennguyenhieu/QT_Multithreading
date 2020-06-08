#include "backendthread.h"
#include <QDebug>

BackendThread::BackendThread()
{
    qInfo() << "BackendThread is created in thread" << this->thread()->currentThreadId();
}

BackendThread::~BackendThread()
{
    qInfo() << "BackendThread is destroyed in thread" << this->thread()->currentThreadId();
}

void BackendThread::run()
{
    qInfo() << "BackendThread is running";

    exec();
}
