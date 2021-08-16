#include "myplugin.h"



Myplugin::Myplugin(QObject *parent)
{
    Q_UNUSED(parent);
}

Myplugin::~Myplugin()
{
    Plugin::~Plugin();
}

void Myplugin::test(QString name)
{
    qInfo() << "Test from plugin: " << name;
}
