#ifndef MYPLUGIN_H
#define MYPLUGIN_H

#include <QObject>
#include <QtPlugin>
#include <QDebug>
#include <QString>
#include "myplugin_global.h"
#include "plugin.h"

class MYPLUGINSHARED_EXPORT Myplugin: public QObject, public Plugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.voidrealms.plugin")
    Q_INTERFACES(Plugin)

public:
    explicit Myplugin(QObject* parent = nullptr);
    ~Myplugin();

signals:

public slots:

    // Plugin interface
public:
    void test(QString name) override;
};

#endif // MYPLUGIN_H
