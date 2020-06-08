#ifndef BACKENDMANAGER_H
#define BACKENDMANAGER_H


#include <QObject>

class BackendChild1;

class BackendManager : public QObject
{
public:
    BackendManager();
    virtual ~BackendManager();

private:
    BackendChild1* m_pBackendChild1;
};

#endif // BACKENDMANAGER_H
