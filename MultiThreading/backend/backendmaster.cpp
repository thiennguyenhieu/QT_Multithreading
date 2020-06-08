#include "backendmaster.h"
#include "backend/backendthread.h"
#include "backend/backendmanager.h"
#include <QDebug>
#include <QThread>

BackendMaster::BackendMaster()
{
    qInfo() << "BackendMaster is created in thead" << this->thread()->currentThreadId();

    m_pBackendThread = new BackendThread();
    m_pBackendManager = new BackendManager();
    m_pBackendManager->moveToThread(m_pBackendThread);

    connect(m_pBackendThread, &QThread::finished, m_pBackendManager, &QObject::deleteLater);

    m_pBackendThread->start();
}

BackendMaster::~BackendMaster()
{
    qInfo() << "BackendMaster is destroyed in thead" << this->thread()->currentThreadId();

    if(m_pBackendThread)
    {
        m_pBackendThread->quit();
        m_pBackendThread->wait();
    }
}
