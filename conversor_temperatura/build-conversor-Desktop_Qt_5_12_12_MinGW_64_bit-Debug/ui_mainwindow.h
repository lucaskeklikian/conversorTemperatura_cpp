/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *texto_celsius;
    QLabel *etiqueta_celsius;
    QLabel *etiqueta_fahrenheit;
    QLineEdit *texto_fahrenheit;
    QPushButton *boton_convertir;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(601, 281);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        texto_celsius = new QLineEdit(centralwidget);
        texto_celsius->setObjectName(QString::fromUtf8("texto_celsius"));
        texto_celsius->setGeometry(QRect(240, 40, 281, 24));
        etiqueta_celsius = new QLabel(centralwidget);
        etiqueta_celsius->setObjectName(QString::fromUtf8("etiqueta_celsius"));
        etiqueta_celsius->setGeometry(QRect(50, 40, 151, 31));
        etiqueta_celsius->setFrameShape(QFrame::NoFrame);
        etiqueta_fahrenheit = new QLabel(centralwidget);
        etiqueta_fahrenheit->setObjectName(QString::fromUtf8("etiqueta_fahrenheit"));
        etiqueta_fahrenheit->setGeometry(QRect(50, 110, 171, 31));
        etiqueta_fahrenheit->setFrameShape(QFrame::NoFrame);
        etiqueta_fahrenheit->setFrameShadow(QFrame::Sunken);
        texto_fahrenheit = new QLineEdit(centralwidget);
        texto_fahrenheit->setObjectName(QString::fromUtf8("texto_fahrenheit"));
        texto_fahrenheit->setGeometry(QRect(240, 110, 281, 24));
        boton_convertir = new QPushButton(centralwidget);
        boton_convertir->setObjectName(QString::fromUtf8("boton_convertir"));
        boton_convertir->setGeometry(QRect(230, 180, 111, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 601, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        etiqueta_celsius->setText(QApplication::translate("MainWindow", "Temperatura en Celsius", nullptr));
        etiqueta_fahrenheit->setText(QApplication::translate("MainWindow", "Temperatura en Fahrenheit", nullptr));
        boton_convertir->setText(QApplication::translate("MainWindow", "CONVERTIR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
