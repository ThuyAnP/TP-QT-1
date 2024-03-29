#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_MiseSousTension_clicked();

    void on_DemarrageDrone_clicked();

    void on_DemarrageDrone_pressed();

private:
    Ui::MainWindow *ui;
    bool clickTension;
};
#endif // MAINWINDOW_H
