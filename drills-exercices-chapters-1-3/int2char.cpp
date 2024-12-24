#include <iostream>

using namespace std;

int main()
{
    char c;
    int i;
    while (cin >> c)
    {
        cout << "inserted character: " << c << endl;
        i = c;
        cout << "corresponding integer: " << i << endl;
    }
}