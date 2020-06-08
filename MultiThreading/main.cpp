#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>
#include "gui/guimanager.h"
#include "backend/backendmaster.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    GuiManager guiManager(&engine);
    guiManager.showMainView();

    BackendMaster backendMaster;

    int exitCode = app.exec();

    return exitCode;
}
