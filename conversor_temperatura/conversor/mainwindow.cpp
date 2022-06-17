#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->texto_fahrenheit->setReadOnly(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_boton_convertir_clicked()
{
   this->realizar_conversion(); // puedo llamar con this
}


void MainWindow::on_texto_celsius_returnPressed()
{
    realizar_conversion();// puedo llamar sin this
}

/*Funcion de conversion*/
void MainWindow::realizar_conversion(void)
{
    bool conversion_exitosa;

    QString texto = ui->texto_celsius->text();

    //int valor_celsius = texto.toInt(&conversion_exitosa);

      double valor_celsius = texto.toDouble(&conversion_exitosa);

    if (conversion_exitosa == true)
    {
        double valor_fahrenheit = (valor_celsius * (9.0/5.0)) + 32;
        ui->texto_fahrenheit->setText(QString::number(valor_fahrenheit));
    }
    else
    {

        ui->texto_fahrenheit->clear();
        //ui->texto_fahrenheit->setText(("ERROR");
        //ui->texto_fahrenheit->setText(("");

        QMessageBox msgBox; //instancio objeto
        msgBox.setWindowTitle("Error en conversion!");
        msgBox.setText("El numero que se intento convertir,no es valido");
        msgBox.exec();

    }
}
