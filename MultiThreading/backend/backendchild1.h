#ifndef BACKENDCHILD1_H
#define BACKENDCHILD1_H


#include <QObject>

class QTimer;

class BackendChild1 : public QObject
{
    Q_OBJECT
public:
    explicit BackendChild1(QObject* pParent = nullptr);
    virtual ~BackendChild1();

private:
    QTimer* m_pTimer;

public slots:
    void testUpdate();
};

#endif // BACKENDCHILD1_H
