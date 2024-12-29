#include <iostream>

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
    cout << "This program calculates the first n primes" << endl;
    cout << "Insert n;" << endl;
    cout << ">>> " << endl;
    int n;
    cin >> n;
    int i = 0;

    // process the number 2
    if (i < n)
    {
        cout << 2 << endl;
        ++i;
    }

    int nextPrimeCont = 3;
    // process the rest of numbers
    while (i < n)
    {
        if (isPrime(nextPrimeCont))
        {
            cout << nextPrimeCont << endl;
        }
        ++i;
        nextPrimeCont += 2;
    }
}