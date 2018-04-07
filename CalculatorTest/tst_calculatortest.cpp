#include <QString>
#include <QtTest>
#include "../Calculator/calculator.h"

class CalculatorTest : public QObject
{
    Q_OBJECT

public:
    CalculatorTest();

private:
    Calculator *m_calculator;

private Q_SLOTS:
    void testCase1();
};

CalculatorTest::CalculatorTest()
{
    m_calculator = new Calculator();
}

void CalculatorTest::testCase1()
{
    QVERIFY(3 == m_calculator->add(1, 2));
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(CalculatorTest)

#include "tst_calculatortest.moc"
