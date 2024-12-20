﻿#include "QtEncrypting.h"
#include <QDebug>


QtEncrypting::QtEncrypting(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

QtEncrypting::~QtEncrypting()
{}

void QtEncrypting::on_encryptButton_clicked()
{
    int x = ui.comboBox->currentIndex();
    
    //QMessageBox::information(this, "log", "Encrypt");

    emit encryptButtonClicked(this); // translate signal encrypt
  

}

void QtEncrypting::on_decryptButton_clicked()
{
   // QMessageBox::information(this, "log", "Decrypt");

    emit decryptButtonClicked(this); // translate signal decrypt

}

void QtEncrypting::setEditTextOutText(const QString& text)
{
    // Изменяем текст на QLabel
    ui.textEditOut->setText(text);
    
}

QString QtEncrypting::getEditText()
{
    // Изменяем текст на QLabel
    return (ui.textEdit->document()->toRawText());

}
QString QtEncrypting::getLineTextArgument()
{
    // Изменяем текст на QLabel
    return (ui.lineEditArgument->text());

}

int QtEncrypting::getComboBox()
{
    // Изменяем текст на QLabel
    return (ui.comboBox->currentIndex());

}
