/********************************************************************************
** Form generated from reading UI file 'QtEncrypting.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTENCRYPTING_H
#define UI_QTENCRYPTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtEncryptingClass
{
public:
    QWidget *centralWidget;
    QPushButton *encryptButton;
    QPushButton *decryptButton;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QLabel *label;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtEncryptingClass)
    {
        if (QtEncryptingClass->objectName().isEmpty())
            QtEncryptingClass->setObjectName("QtEncryptingClass");
        QtEncryptingClass->resize(600, 400);
        centralWidget = new QWidget(QtEncryptingClass);
        centralWidget->setObjectName("centralWidget");
        encryptButton = new QPushButton(centralWidget);
        encryptButton->setObjectName("encryptButton");
        encryptButton->setGeometry(QRect(100, 160, 80, 24));
        decryptButton = new QPushButton(centralWidget);
        decryptButton->setObjectName("decryptButton");
        decryptButton->setGeometry(QRect(190, 160, 80, 24));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(100, 120, 171, 24));
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(100, 80, 171, 24));
        comboBox->setEditable(false);
        comboBox->setModelColumn(0);
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 200, 161, 41));
        QtEncryptingClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtEncryptingClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        QtEncryptingClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(QtEncryptingClass);
        statusBar->setObjectName("statusBar");
        QtEncryptingClass->setStatusBar(statusBar);

        retranslateUi(QtEncryptingClass);
        QObject::connect(encryptButton, SIGNAL(clicked()), QtEncryptingClass, SLOT(slot1()));
        QObject::connect(decryptButton, SIGNAL(clicked()), QtEncryptingClass, SLOT(slot2()));

        QMetaObject::connectSlotsByName(QtEncryptingClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtEncryptingClass)
    {
        QtEncryptingClass->setWindowTitle(QCoreApplication::translate("QtEncryptingClass", "QtEncrypting", nullptr));
        encryptButton->setText(QCoreApplication::translate("QtEncryptingClass", "Encrypt", nullptr));
        decryptButton->setText(QCoreApplication::translate("QtEncryptingClass", "Decrypt", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("QtEncryptingClass", "1 algorithm", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("QtEncryptingClass", "2 algorithm", nullptr));

        comboBox->setCurrentText(QCoreApplication::translate("QtEncryptingClass", "1 algorithm", nullptr));
        label->setText(QCoreApplication::translate("QtEncryptingClass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtEncryptingClass: public Ui_QtEncryptingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTENCRYPTING_H
