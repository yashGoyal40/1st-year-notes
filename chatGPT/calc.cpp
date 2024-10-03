#include <QApplication>
#include <QWidget>
#include <QLineEdit>
#include <QGridLayout>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    window->setWindowTitle("Calculator");

    QLineEdit *display = new QLineEdit;
    display->setReadOnly(true);

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(display, 0, 0, 1, 4);

    QPushButton *button0 = new QPushButton("0");
    QPushButton *button1 = new QPushButton("1");
    QPushButton *button2 = new QPushButton("2");
    QPushButton *button3 = new QPushButton("3");
    QPushButton *button4 = new QPushButton("4");
    QPushButton *button5 = new QPushButton("5");
    QPushButton *button6 = new QPushButton("6");
    QPushButton *button7 = new QPushButton("7");
    QPushButton *button8 = new QPushButton("8");
    QPushButton *button9 = new QPushButton("9");
    QPushButton *buttonDot = new QPushButton(".");
    QPushButton *buttonEqual = new QPushButton("=");
    QPushButton *buttonPlus = new QPushButton("+");
    QPushButton *buttonMinus = new QPushButton("-");
    QPushButton *buttonMultiply = new QPushButton("*");
    QPushButton *buttonDivide = new QPushButton("/");
    QPushButton *buttonClear = new QPushButton("C");

    layout->addWidget(button7, 1, 0);
    layout->addWidget(button8, 1, 1);
    layout->addWidget(button9, 1, 2);
    layout->addWidget(buttonDivide, 1, 3);

    layout->addWidget(button4, 2, 0);
    layout->addWidget(button5, 2, 1);
    layout->addWidget(button6, 2, 2);
    layout->addWidget(buttonMultiply, 2, 3);

    layout->addWidget(button1, 3, 0);
    layout->addWidget(button2, 3, 1);
    layout->addWidget(button3, 3, 2);
    layout->addWidget(buttonMinus, 3, 3);

    layout->addWidget(button0, 4, 0);
    layout->addWidget(buttonDot, 4, 1);
    layout->addWidget(buttonEqual, 4, 2);
    layout->addWidget(buttonPlus, 4, 3);

    layout->addWidget(buttonClear, 5, 0, 1, 2);

    window->setLayout(layout);
    window->show();

    return app.exec();
}
