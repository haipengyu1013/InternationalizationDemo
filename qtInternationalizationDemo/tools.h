#ifndef TOOLS_H
#define TOOLS_H

#include <QObject>
#include <QQmlApplicationEngine>

class Tools : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString emptyString READ getEmptyString NOTIFY languageChanged)

public:
    explicit Tools(QObject *parent = nullptr);
    Q_INVOKABLE void changlanguage(int type);

    QString getEmptyString() {
        return "";
    }

signals:
    void languageChanged();

public slots:

private:

};

#endif // TOOLS_H
