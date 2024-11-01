#include "mainwindow.h"
#include "ui_mainwindow.h"

Toolbar *toolbar;
static QTextEdit *textEdit;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    textEdit = ui->mainTextEdit;

    // setting up the basic values of the fontSlider
    ui->fontSlider->setRange(8, 100);
    ui->fontSlider->setValue(12);

    // connecting the slider changes to the slot function
    connect(ui->fontSlider, &QSlider::valueChanged, this, &MainWindow::onFontSliderChanged);


    // setting up the menu bar for easy access
    QMenuBar *menuBar = this->menuBar();

    // creating the file menu
    QMenu *fileMenu = menuBar->addMenu("File");
    QAction *newAction = new QAction("New", this);
    QAction *openAction = new QAction("Open", this);
    QAction *saveAction = new QAction("Save", this);
    QAction *exitAction = new QAction("Exit", this);

    newAction->setShortcut(QKeySequence::New); // Ctrl + N
    openAction->setShortcut(QKeySequence::Open); // Ctrl + O
    saveAction->setShortcut(QKeySequence::Save); // Ctrl + S
    exitAction->setShortcut(QKeySequence::Quit); // Ctrl + Q

    // connecting actions to slots
    connect(newAction, &QAction::triggered, this, &MainWindow::newFile);
    connect(openAction, &QAction::triggered, this, &MainWindow::openFile);
    connect(saveAction, &QAction::triggered, this, &MainWindow::saveFile);
    connect(exitAction, &QAction::triggered, this, &MainWindow::close);

    // adding actions to "File" menu
    fileMenu->addAction(newAction);
    fileMenu->addAction(openAction);
    fileMenu->addAction(saveAction);
    fileMenu->addSeparator(); // Adds a separator line
    fileMenu->addAction(exitAction);

    // creating "Edit" menu
    QMenu *editMenu = menuBar->addMenu("Edit");
    QAction *cutAction = new QAction("Cut", this);
    QAction *copyAction = new QAction("Copy", this);
    QAction *pasteAction = new QAction("Paste", this);

    cutAction->setShortcut(QKeySequence::Cut); // Ctrl + X
    copyAction->setShortcut(QKeySequence::Copy); // Ctrl + C
    pasteAction->setShortcut(QKeySequence::Paste); // Ctrl + V

    connect(cutAction, &QAction::triggered, this, &MainWindow::cut);
    connect(copyAction, &QAction::triggered, this, &MainWindow::copy);
    connect(pasteAction, &QAction::triggered, this, &MainWindow::paste);


    editMenu->addAction(cutAction);
    editMenu->addAction(copyAction);
    editMenu->addAction(pasteAction);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// slot implementation to change font size
void MainWindow::onFontSliderChanged(int value) {
    QFont font = ui->mainTextEdit->font();
    font.setPointSize(value);
    ui->mainTextEdit->setFont(font);
}


void MainWindow::newFile() {

}

void MainWindow::openFile() {
    QString filename = QFileDialog::getOpenFileName(this, "Open File", "", "Text Files (*.txt);;All Files (*)");
    if (!filename.isEmpty()) {
        // Open the file and load the contents
    }
}

void MainWindow::saveFile() {
    QString filename = QFileDialog::getSaveFileName(this, "Save File", "", "Text Files (*.txt);;All Files (*)");
    if (!filename.isEmpty()) {
        // Save the current text to the file
    }
}

void MainWindow::cut() {

}

void MainWindow::copy() {

}

void MainWindow::paste() {

}

void MainWindow::on_pushButtonsmall_clicked()
{
    toolbar->setFontSizeSmall(textEdit);
    ui->fontSlider->setValue(10);
}


void MainWindow::on_pushButtonmedium_clicked()
{
    toolbar->setFontSizeMedium(textEdit);
    ui->fontSlider->setValue(18);
}


void MainWindow::on_pushButtonlarge_clicked()
{
    toolbar->setFontSizeLarge(textEdit);
    ui->fontSlider->setValue(30);
}


void MainWindow::on_pushButtonextraLarge_clicked()
{
    toolbar->setFontSizeExtraLarge(textEdit);
    ui->fontSlider->setValue(50);
}

