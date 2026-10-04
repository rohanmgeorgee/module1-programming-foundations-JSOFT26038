#include <iostream>
using namespace std;
int main()
{
    int age;
    bool hasTicket;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Do you have a ticket? 1 for yes or 0 for no: ";
    cin >> hasTicket;
    if (age >= 18)
    {
        if (hasTicket)
        {
            cout << "Entry allowed" << endl;
        }
        else
        {
            cout << "Buy a ticket first" << endl;
        }
    }
    else
    {
        cout << "Not eligible by age" << endl;
    }
    return 0;
}