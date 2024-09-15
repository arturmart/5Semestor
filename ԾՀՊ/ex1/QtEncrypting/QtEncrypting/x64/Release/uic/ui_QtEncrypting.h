/********************************************************************************
** Form generated from reading UI file 'QtEncrypting.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTENCRYPTING_H
#define UI_QTENCRYPTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtEncryptingClass
{
public:
    QWidget *centralWidget;
    QPushButton *encryptButton;
    QPushButton *decryptButton;
    QComboBox *comboBox;
    QLineEdit *lineEditArgument;
    QTextEdit *textEdit;
    QTextEdit *textEditOut;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtEncryptingClass)
    {
        if (QtEncryptingClass->objectName().isEmpty())
            QtEncryptingClass->setObjectName("QtEncryptingClass");
        QtEncryptingClass->resize(315, 313);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QtEncryptingClass->sizePolicy().hasHeightForWidth());
        QtEncryptingClass->setSizePolicy(sizePolicy);
        QtEncryptingClass->setMinimumSize(QSize(315, 313));
        QtEncryptingClass->setMaximumSize(QSize(315, 313));
        QtEncryptingClass->setAcceptDrops(true);
        centralWidget = new QWidget(QtEncryptingClass);
        centralWidget->setObjectName("centralWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        encryptButton = new QPushButton(centralWidget);
        encryptButton->setObjectName("encryptButton");
        encryptButton->setGeometry(QRect(70, 150, 80, 24));
        decryptButton = new QPushButton(centralWidget);
        decryptButton->setObjectName("decryptButton");
        decryptButton->setGeometry(QRect(160, 150, 80, 24));
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(70, 40, 171, 24));
        comboBox->setEditable(false);
        comboBox->setModelColumn(0);
        lineEditArgument = new QLineEdit(centralWidget);
        lineEditArgument->setObjectName("lineEditArgument");
        lineEditArgument->setGeometry(QRect(250, 70, 31, 24));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(70, 70, 171, 71));
        textEditOut = new QTextEdit(centralWidget);
        textEditOut->setObjectName("textEditOut");
        textEditOut->setEnabled(true);
        textEditOut->setGeometry(QRect(70, 180, 171, 81));
        QtEncryptingClass->setCentralWidget(centralWidget);
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
        comboBox->setItemText(0, QCoreApplication::translate("QtEncryptingClass", "Caesar", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("QtEncryptingClass", "2 algorithm", nullptr));

        comboBox->setCurrentText(QCoreApplication::translate("QtEncryptingClass", "Caesar", nullptr));
        lineEditArgument->setInputMask(QString());
        lineEditArgument->setText(QCoreApplication::translate("QtEncryptingClass", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtEncryptingClass: public Ui_QtEncryptingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTENCRYPTING_H
