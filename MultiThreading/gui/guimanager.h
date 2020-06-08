#ifndef GUIMANAGER_H
#define GUIMANAGER_H

#include <QObject>

class QQmlApplicationEngine;
class MainView;

class GuiManager : public QObject
{
    Q_OBJECT
public:
    GuiManager(QQmlApplicationEngine* engine);
    virtual ~GuiManager();

    void showMainView();
    QQmlApplicationEngine* getEngine();

private:
    QQmlApplicationEngine* m_pEngine;
    MainView* m_pMainView;
};

#endif // GUIMANAGER_H
