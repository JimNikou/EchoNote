#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFont>
#include <QMenuBar>
#include <QAction>
#include <QMessageBox>
#include <QFileDialog>
#include "toolbar.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void onFontSliderChanged(int value); // Slot to handle slider changes
    void newFile();   // Declare the newFile slot
    void openFile();  // Declare the openFile slot
    void saveFile();  // Declare the saveFile slot
    void cut();       // Declare the cut slot
    void copy();      // Declare the copy slot
    void paste();     // Declare the paste slot
    void on_pushButtonsmall_clicked();
    void on_pushButtonmedium_clicked();
    void on_pushButtonlarge_clicked();
    void on_pushButtonextraLarge_clicked();
};

#endif // MAINWINDOW_H
