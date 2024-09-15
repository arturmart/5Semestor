#include "encrypt.h"



QString EncryptCaesar::Encrypt(const QString& text, int shift ) {

    QString str = text;

    for (int i = 0; i < str.size(); ++i) {
        QChar ch = str[i];
        str[i] = QChar(ch.unicode() + shift);
    }

    return str;
}

QString EncryptCaesar::Decrypt(const QString& text, int shift){
    QString str = text;

    for (int i = 0; i < str.size(); ++i) {
        QChar ch = str[i];
        str[i] = QChar(ch.unicode() - shift);
    }

    return str;
}
