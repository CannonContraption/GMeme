#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QPixmap>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QPixmap * qpx;
    QFileDialog * filedia;
    ~MainWindow();
public slots:
    void on_openImage_clicked();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
