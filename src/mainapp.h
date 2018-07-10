#ifndef MAINAPP_H
#define MAINAPP_H

#include <QObject>
#include <QApplication>
#include "singleinstance.h"
#include "mainwindow.h"
#include "logcatreader.h"

class MainApp : public QObject
{
    Q_OBJECT

    QApplication *qapp;
    SingleInstance instance;

    MainWindow mainWindow;
    LogcatReader lReader;

    QString name = "YoYoQpKeNc_RobotMonitor";

private:
    void readSettings();

public:
    explicit MainApp(QApplication* a, QObject *parent = 0);
    ~MainApp();
    int run();

};

#endif // MAINAPP_H
