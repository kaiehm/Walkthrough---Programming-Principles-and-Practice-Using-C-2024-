#include <iostream>

using namespace std;
int main()
{
    int x;
    cin >> x;
    cout << "The int " << x << " is " << (x % 2 == 0 ? "even" : "odd") << endl;
}