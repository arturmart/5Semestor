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

private slots:
    void on_encryptButton_clicked();
    void on_decryptButton_clicked();


private:
    Ui::QtEncryptingClass ui;
};
