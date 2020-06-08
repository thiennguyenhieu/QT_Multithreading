#include "backendmanager.h"
#include <QDebug>
#include "backendchild1.h"
#include <QThread>

BackendManager::BackendManager()
{
    qInfo() << "BackendManager is created in thead" << this->thread()->currentThreadId();

    m_pBackendChild1 = new BackendChild1(this);
}

BackendManager::~BackendManager()
{
    qInfo() << "BackendManager is destroyed in thead" << this->thread()->currentThreadId();

    if (m_pBackendChild1)
        delete m_pBackendChild1;
}
