#ifndef MAINVIEW_H
#define MAINVIEW_H


#include <QObject>

class MainView : public QObject
{
    Q_OBJECT
public:
    explicit MainView(QObject* pParent = nullptr);
    virtual ~MainView();

    void showView();

    Q_INVOKABLE void onBtnClickMeClicked();
};

#endif // MAINVIEW_H
