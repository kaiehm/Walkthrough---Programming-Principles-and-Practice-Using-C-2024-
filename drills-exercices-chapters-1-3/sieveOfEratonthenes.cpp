#include <iostream>
#include <vector>

using namespace std;

vector<bool> sieveOfEratosthenes(int n)
{
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;
    for (int i = 4; i < n + 1; i += 2)
    {
        sieve[i] = false;
    }
    for (int i = 3; i < n + 1; i += 2)
    {
        if (sieve[i])
        {
            for (int multiple = i * i; multiple < n + 1; multiple += i)
            {
                sieve[multiple] = false;
            }
        }
    }

    return sieve;
}
int main()
{
    int n;
    cout << "This program calculates and displays prime numbers from 1 to n" << endl;
    cout << "Insert n" << endl;
    cout << ">>> ";
    cin >> n;
    vector<bool> sieve = sieveOfEratosthenes(n);
    for (int i = 0; i < sieve.size(); i++)
    {
        if (sieve[i])
        {
            cout << i << endl;
        }
    }
}