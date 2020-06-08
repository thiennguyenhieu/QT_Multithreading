#ifndef BACKENDMASTER_H
#define BACKENDMASTER_H


#include <QObject>

class BackendManager;
class BackendThread;

class BackendMaster : public QObject
{
public:
    BackendMaster();
    virtual ~BackendMaster();

private:
    BackendManager* m_pBackendManager;
    BackendThread* m_pBackendThread;
};

#endif // BACKENDMASTER_H
