#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i < n / 2; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    cout << "This program calculates all prime numbers to a limit n" << endl;
    cout << "Insert n" << endl;
    cout << ">>> " << endl;
    int n;
    cin >> n;
    if (n >= 2)
    {
        cout << 2 << endl;
    }
    for (int i = 3; i < n + 1; i += 2)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
}