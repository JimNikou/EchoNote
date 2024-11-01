#include "toolbar.h"

Toolbar::Toolbar()
{

}

void Toolbar::setFontSizeSmall(QTextEdit *textEdit) {
    if (textEdit) {
        QFont font = textEdit->font();
        font.setPointSize(10); // Set small font size
        textEdit->setFont(font); // Apply the new font
    }
}

void Toolbar::setFontSizeMedium(QTextEdit *textEdit) {
    if (textEdit) {
        QFont font = textEdit->font();
        font.setPointSize(18); // Set medium font size
        textEdit->setFont(font);
    }
}

void Toolbar::setFontSizeLarge(QTextEdit *textEdit) {
    if (textEdit) {
        QFont font = textEdit->font();
        font.setPointSize(30); // Set large font size
        textEdit->setFont(font);
    }
}

void Toolbar::setFontSizeExtraLarge(QTextEdit *textEdit) {
    if (textEdit) {
        QFont font = textEdit->font();
        font.setPointSize(50); // Set extra large font size
        textEdit->setFont(font);
    }
}


