#include "guimanager.h"
#include "gui/mainview.h"
#include <QQmlApplicationEngine>
#include <QDebug>
#include <QThread>
#include <QQmlContext>

GuiManager::GuiManager(QQmlApplicationEngine* engine)
    : m_pEngine(engine)
{
    qInfo() << "GuiManager is created in thead" << this->thread()->currentThreadId();

    m_pMainView = new MainView(this);
    m_pEngine->rootContext()->setContextProperty("MainView", m_pMainView);
}

GuiManager::~GuiManager()
{
    qInfo() << "GuiManager is destroyed in thead" << this->thread()->currentThreadId();
    if (m_pMainView)
        delete m_pMainView;
}

void GuiManager::showMainView()
{
    if (m_pMainView)
        m_pMainView->showView();
}

QQmlApplicationEngine* GuiManager::getEngine()
{
    return m_pEngine;
}
