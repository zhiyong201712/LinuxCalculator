#include <QCoreApplication>
#include "calculator.h"
#include <iostream>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Calculator calculator;
    std::cout << "1 + 2 = " << calculator.add(1, 2) << std::endl;
    std::cout << "2 - 1 = " << calculator.sub(2, 1) << std::endl;

    return a.exec();
}
