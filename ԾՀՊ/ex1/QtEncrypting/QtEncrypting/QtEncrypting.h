#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtEncrypting.h"

#include <QMessageBox>
#include <QEvent>

class QtEncrypting : public QMainWindow
{
    Q_OBJECT

public:
    QtEncrypting(QWidget *parent = nullptr);
    ~QtEncrypting();

signals:
    void encryptButtonClicked(QtEncrypting* sender);  // signal encrypt
    void decryptButtonClicked(QtEncrypting* sender);  // signal decrypt

private slots:
    void on_encryptButton_clicked();
    void on_decryptButton_clicked();

public slots: 
    void setLabelText(const QString& text);  // Слот для получения данных
    QString getLineText();
    int getComboBox();




private:
    Ui::QtEncryptingClass ui;
};
