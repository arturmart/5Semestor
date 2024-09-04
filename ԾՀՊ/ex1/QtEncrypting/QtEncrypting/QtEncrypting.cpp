#include "QtEncrypting.h"

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
    ui.label->setText(QString::number(x));
    QMessageBox::information(this, "log", "Encrypt");
  

}

void QtEncrypting::on_decryptButton_clicked()
{
    QMessageBox::information(this, "log", "Decrypt");

}
