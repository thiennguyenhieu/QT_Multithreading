#include "backendchild1.h"
#include <QDebug>
#include <QThread>
#include <QTimer>

BackendChild1::BackendChild1(QObject* pParent) : QObject(pParent)
{
    qInfo() << "BackendChild1 is created in thead" << this->thread()->currentThreadId();

    m_pTimer = new QTimer(this);
    connect(m_pTimer, SIGNAL(timeout()), this, SLOT(testUpdate()));
    m_pTimer->start(1000);

}

BackendChild1::~BackendChild1()
{
    qInfo() << "BackendChild1 is destroyed in thead" << this->thread()->currentThreadId();

    if (m_pTimer)
        delete m_pTimer;
}

void BackendChild1::testUpdate()
{
  qInfo() << "BackendChild1::testUpdate called in thead" << this->thread()->currentThreadId();

  if (m_pTimer)
     m_pTimer->stop();
}
