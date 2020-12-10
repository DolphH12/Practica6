#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "cuerpo.h"
#include "cuerpograf.h"

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
    void actualizar();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QGraphicsScene * scene;
    float dt;
    float entrada;
    int h_limit;
    int v_limit;
    QList<cuerpograf*> bars;
};
#endif // MAINWINDOW_H
