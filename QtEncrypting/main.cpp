#include "QtEncrypting.h"
#include "encrypt.h"
#include <QtWidgets/QApplication>

#include <QMessageBox>



#include <iostream>
#include <string>





void handleEncryptButtonClick(QtEncrypting* encryptingInstance) {
    // Это функция, которая будет вызываться, когда кнопка нажата
    qDebug() << "Encrypt Button clicked(in Main)!";

    QString data = encryptingInstance->getEditText();
    //encryptingInstance->getLineTextArgument();
    QString buf;

    if (encryptingInstance->getComboBox() == 0) {
        buf = "0";
    }
    else if (encryptingInstance->getComboBox() == 1) {
        buf = "1";
    }
    EncryptCaesar et;
   
    int arg = encryptingInstance->getLineTextArgument().toInt();
    encryptingInstance->setEditTextOutText(et.Encrypt(data,arg));


}

void handleDecryptButtonClick(QtEncrypting* encryptingInstance) {
    // Это функция, которая будет вызываться, когда кнопка нажата
    qDebug() << "Decrypt Button clicked!(in Main)";
    QString data = encryptingInstance->getEditText();
    //encryptingInstance->getLineTextArgument();
    QString buf;

    if (encryptingInstance->getComboBox() == 0) {
        buf = "0";
    }
    else if (encryptingInstance->getComboBox() == 1) {
        buf = "1";
    }

    EncryptCaesar et;
    int arg = encryptingInstance->getLineTextArgument().toInt();
    encryptingInstance->setEditTextOutText(et.Decrypt(data, arg));

}




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtEncrypting w;
    
    
    w.show();
    QObject::connect(&w, &QtEncrypting::encryptButtonClicked, &handleEncryptButtonClick);
    QObject::connect(&w, &QtEncrypting::decryptButtonClicked, &handleDecryptButtonClick);


    

    //EncryptCaesar et;
    //w.setLabelText(et.Encrypt("10",3));

   // MainApplication* app = new MainApplication();

    // Соединяем сигнал `sendDataToForm()` из main с `receiveDataFromMain()` в MyForm
    //QObject::connect(app, &MainApplication::sendDataToForm, &w, &QtEncrypting::receiveDataFromMain);


    //app->sendDataToForm(42);

    return a.exec();
}
