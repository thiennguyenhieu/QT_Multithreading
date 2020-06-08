#include "mainview.h"
#include "guimanager.h"
#include <QQmlApplicationEngine>
#include <QDebug>
#include <QThread>

#define URL QStringLiteral("qrc:/main.qml")

MainView::MainView(QObject* pParent) : QObject(pParent)
{
    qInfo() << "MainView is created in thead" << this->thread()->currentThreadId();
}

MainView::~MainView()
{
    qInfo() << "MainView is destroyed in thead" << this->thread()->currentThreadId();
}

void MainView::showView()
{
    GuiManager* pParent = static_cast<GuiManager*>(this->parent());
    if (pParent && pParent->getEngine())
        pParent->getEngine()->load(URL);
}

void MainView::onBtnClickMeClicked()
{
    qInfo() << "MainView::onBtnClickMeClicked called in thead" << this->thread()->currentThreadId();
}
