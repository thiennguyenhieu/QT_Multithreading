#ifndef BACKENDTHREAD_H
#define BACKENDTHREAD_H


#include <QThread>

class BackendThread : public QThread
{
public:
    BackendThread();
    ~BackendThread() override;

protected:
    void run() override;
};

#endif // BACKENDTHREAD_H
