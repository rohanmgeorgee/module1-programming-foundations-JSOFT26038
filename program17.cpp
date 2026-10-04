#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your mark (If mark > or = 40 you are passed): ";
    cin >> marks;
    if (marks >= 40)
        cout << "Pass" << endl;
    else
        cout << "Fail" << endl;
    return 0;
}