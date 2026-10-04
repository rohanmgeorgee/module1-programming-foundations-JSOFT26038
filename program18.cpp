#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 numbers (1 3 5): ";
    cin >> a >> b >> c;
    if (a >= b && a >= c)
        cout << a << " " << "is the largest of 3 numbers" << endl;
    else if (b >= a && b >= c)
        cout << b << " " << "is the largest of 3 numbers" << endl;
    else
        cout << c << " " << "is the largest of 3 numbers" << endl;
    return 0;
}