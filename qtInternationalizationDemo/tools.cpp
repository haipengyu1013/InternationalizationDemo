#include "tools.h"
#include <QTranslator>
#include <QDebug>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

Tools::Tools(QObject *parent) : QObject(parent)
{

}

void Tools::changlanguage(int type)
{

    QTranslator qtTranslator;
    //    qDebug()<< "result999090 is " <<qtTranslator.load("lang/lang_korean.qm");
    //    qGuiApp->removeTranslator();
    qDebug()<< "21654897654 ";

    switch (type) {
    case 0:
        qtTranslator.load("lang/lang_chinese.qm");
        break;
    case 1:
        qtTranslator.load("lang/lang_en.qm");
        break;
    case 2:
        qtTranslator.load("lang/lang_germany.qm");
        break;
    case 3:
        qtTranslator.load("lang/lang_korean.qm");
        break;
    default:
        qtTranslator.load("lang/lang_chinese.qm");
        break;
    }

    qGuiApp->installTranslator(&qtTranslator);

    emit languageChanged();
}


