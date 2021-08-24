#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
    T num1, num2;

public:
    Calculator(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void displayResults()
    {
        cout << "Numbers are: " << num1 << " and " << num2 << endl;
        cout << "Addition of " << num1 << " and " << num2 << " is " << add() << endl;
        cout << "Subtraction of " << num1 << " and " << num2 << " is " << sub() << endl;
        cout << "Multiplication of " << num1 << " and " << num2 << " is " << mul() << endl;
        cout << "Division of " << num1 << " and " << num2 << " is " << div() << endl;
    }

    T add()
    {
        return num1 + num2;
    }

    T sub()
    {
        return num1 - num2;
    }

    T mul()
    {
        return num1 * num2;
    }

    T div()
    {
        return num1 / num2;
    }
};

int main()
{
    Calculator<int> intCalc(4, 2);
    Calculator<float> floatCalc(4.4, 2.2);

    cout << "Int result: \n";
    intCalc.displayResults();

    cout << "Float result: \n";
    floatCalc.displayResults();
    return 0;
}