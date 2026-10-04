#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;
    double result;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    if (op != '+' && op != '-' && op != '*' && op != '/')
    {
        cout << "Invalid operator" << endl;
        return 0;
    }

    cout << "Enter number 2: ";
    cin >> num2;

    if (op == '+')
        result = num1 + num2;
    else if (op == '-')
        result = num1 - num2;
    else if (op == '*')
        result = num1 * num2;
    else if (op == '/')
        result = num1 / num2;

    cout << "Result = " << result << endl;
    return 0;
}