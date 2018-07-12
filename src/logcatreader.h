#ifndef LOGCATREADER_H
#define LOGCATREADER_H

#include <QProcess>
#include <QString>

class LogcatReader{

private:
    QString adbPathAlternative;
    QProcess adbProcess;
public:


private:

public:
    LogcatReader();
    ~LogcatReader();

    void Start();

};

#endif // LOGCATREADER_H
