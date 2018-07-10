#include "mainapp.h"
#include <QProcess>
#include <QFile>
#include <QSettings>


MainApp::MainApp(QApplication* a,QObject *parent) : QObject(parent), qapp(a)
{
    // set up connection here
}

int MainApp::run()
{
    // guard single instance
    if(instance.hasPrevious(name, QCoreApplication::arguments())){
        return 0;
    }
    instance.listen(name);

    readSettings();

    mainWindow.show();
    return qapp->exec();
}

// TODO
void MainApp::readSettings(){
}

MainApp::~MainApp()
{

}
