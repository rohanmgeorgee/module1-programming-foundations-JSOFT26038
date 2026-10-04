#include <iostream>
using namespace std;
int main()
{
    double a, b;
    char op;
    cout << "Enter number 1, operator, number 2: ";
    cin >> a >> op >> b;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
    }
    return 0;
}