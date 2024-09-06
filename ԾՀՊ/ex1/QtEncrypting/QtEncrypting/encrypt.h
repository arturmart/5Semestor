#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <QString>

// Интерфейс для шифрования
class EncryptInterface {
public:
    virtual ~EncryptInterface() {}
    virtual QString Encrypt(const QString& text) = 0;
    virtual QString Decrypt(const QString& text) = 0;
};

// Тестовая реализация интерфейса шифрования
class EncryptTest : public EncryptInterface {
public:
    QString Encrypt(const QString& text) override;  // Только объявление
    QString Decrypt(const QString& text) override;  // Только объявление
};

#endif // ENCRYPT_H