#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // initialisation
    ui->DemarrageDrone->setDisabled(true);
    ui->EtatTension->setText("Hors tension");
    ui->EtatTension->setDisabled(false);
    clickTension = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_MiseSousTension_clicked()
{
    if (clickTension == false)
    {
        // modification du texte
        ui->EtatTension->setText("En tension");

        // on met le texte à l'état actif puis on positionne la variable
        ui->EtatTension->setDisabled(true);
        ui->DemarrageDrone->setDisabled(false);
        clickTension = true;
    }
    else
    {
        // modification du texte
        ui->EtatTension->setText("Mise sous tension");

        // on met le texte à l'état actif puis on positionne la variable
        ui->EtatTension->setDisabled(false);
        clickTension = false;
    }
}


void MainWindow::on_DemarrageDrone_clicked()
{
     ui->EtatDemarrage->setText("Drone démarré");
}
