#include <iostream>
using namespace std;
int main()
{
    string name;
    string JSOFTID;
    float marks;
    cout << "Enter JSOFT ID: ";
    cin >> JSOFTID;
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter marks: ";
    cin >> marks;
    cout << "\n--- Student Record ---\n";
    cout << "JSOFT ID: " << JSOFTID << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
    return 0;
}