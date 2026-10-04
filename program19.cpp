#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "1. Add\n2. Subtract\n3. Exit\nEnter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Addition selected" << endl;
        break;
    case 2:
        cout << "Subtraction selected" << endl;
        break;
    case 3:
        cout << "Exiting" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
    }
    return 0;
}