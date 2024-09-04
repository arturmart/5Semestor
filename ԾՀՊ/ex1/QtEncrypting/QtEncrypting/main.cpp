#include "QtEncrypting.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtEncrypting w;
    
   
    w.show();
    
    return a.exec();
}
