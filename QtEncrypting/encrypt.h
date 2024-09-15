#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <QString>

// Интерфейс для шифрования
class EncryptInterface {
public:
    virtual ~EncryptInterface() {}
    virtual QString Encrypt(const QString& text, const int shift) = 0;
    virtual QString Decrypt(const QString& text, const int shift) = 0;
};

// Тестовая реализация интерфейса шифрования

class EncryptCaesar : public EncryptInterface {
public:
    QString Encrypt(const QString& text, const int shift) override;  // Только объявление
    QString Decrypt(const QString& text, const int shift) override;  // Только объявление
};
#endif // ENCRYPT_H