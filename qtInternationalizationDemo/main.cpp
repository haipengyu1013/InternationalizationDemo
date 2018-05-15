#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QTranslator>
#include <QQmlContext>
#include <QDebug>
#include "tools.h"
int main(int argc, char *argv[])
{

    QGuiApplication app(argc, argv);

    Tools* tools = new Tools();
    QTranslator qtTranslator;
    qDebug()<< "result is " <<qtTranslator.load("lang/lang_chinese.qm");
    qGuiApp->installTranslator(&qtTranslator);

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("tools" , tools);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    QObject::connect(tools , SIGNAL(languageChanged()) , &engine , SLOT(retranslate()));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
