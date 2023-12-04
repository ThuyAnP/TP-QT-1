#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // initialisation
    ui->DemarrageDrone->setDisabled(true);
    ui->EtatTension_2->setText("Hors tension");
    ui->EtatTension_2->setDisabled(false);
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
        ui->EtatTension_2->setText("En tension");

        // on met le texte à l'état actif puis on positionne la variable
        ui->EtatTension_2->setDisabled(true);
        ui->DemarrageDrone->setDisabled(false);
        clickTension = true;
    }
    else
    {
        // modification du texte
        ui->EtatTension_2->setText("Mise sous tension");

        // on met le texte à l'état actif puis on positionne la variable
        ui->EtatTension_2->setDisabled(false);
        clickTension = false;
    }
}


void MainWindow::on_DemarrageDrone_clicked()
{
     ui->EtatDemarrage_2->setText("Drone démarré");
}
