#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QWidget>
#include <QSlider>
#include <QTextEdit>
#include <QFont>
#include <QLabel>

class Toolbar : public QWidget {
    Q_OBJECT
public:
    Toolbar();
    explicit Toolbar(QWidget *parent = nullptr);

    static void modifySliderValue(QSlider *slider, int newValue);

    void setFontSizeSmall(QTextEdit *textEdit);
    void setFontSizeMedium(QTextEdit *textEdit);
    void setFontSizeLarge(QTextEdit *textEdit);
    void setFontSizeExtraLarge(QTextEdit *textEdit);
private:

};


#endif // TOOLBAR_H
