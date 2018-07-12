#include "logcatreader.h"
#include <QDebug>
#include <QProcess>
#include <QSettings>


LogcatReader::LogcatReader(){
    QSettings settings;
    adbPathAlternative = settings.value("adb/path").toString();

    Start();
}

LogcatReader::~LogcatReader(){

}

void LogcatReader::Start(){
    qDebug()<<"Start adb";
    adbProcess.start("adb devices");
    adbProcess.waitForFinished();

    qDebug() << adbProcess.readLine();
    qDebug() << adbProcess.readLine();
    qDebug() << adbProcess.readLine();
    qDebug() << adbProcess.readLine();

    qDebug()<<"Finish adb";


}
