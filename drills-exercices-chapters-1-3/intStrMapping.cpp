#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number:" << endl;
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "one" << endl;
    case 2:
        cout << "two" << endl;
    default:
        cout << "not a number I know..." << endl;
    }
}