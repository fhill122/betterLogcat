#include <QApplication>
#include <QSettings>
#include "src/mainapp.h"

int main(int argc, char *argv[])
{
    /* Things to do before QApplication object created **/

    /* Run application **/
    QApplication a(argc, argv);
    // ini setting
    QApplication::setOrganizationName("config");
    QApplication::setApplicationName("config");
    QSettings::setDefaultFormat(QSettings::IniFormat);
    QSettings::setPath(QSettings::IniFormat, QSettings::UserScope, QApplication::applicationDirPath() );

    MainApp app(&a);
    return app.run();
}
