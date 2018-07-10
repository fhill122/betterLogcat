#include "logcatreader.h"
#include <QDebug>
#include <QSettings>


LogcatReader::LogcatReader(){
    QSettings settings;
    qDebug()<< "adb path:" << settings.value("adb/path").toString();
}

LogcatReader::~LogcatReader(){

}
