#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "insert two integer values.. " << endl;
    cin >> n1 >> n2;
    cout << "min: " << (n1 > n2 ? n2 : n1) << endl;
    cout << "max: " << (n1 < n2 ? n2 : n1) << endl;
    cout << "sum: " << n1 + n2 << endl;
    cout << "difference: " << n1 - n2 << endl;
    cout << "product: " << n1 * n2 << endl;
    cout << "ratio: " << n1 / n2 << endl;

    double d1, d2;
    cout << "insert two float values.. " << endl;
    cin >> d1 >> d2;
    cout << "min: " << (d1 > d2 ? d2 : d1) << endl;
    cout << "max: " << (d1 < d2 ? d2 : d1) << endl;
    cout << "sum: " << d1 + d2 << endl;
    cout << "difference: " << d1 - d2 << endl;
    cout << "product: " << d1 * d2 << endl;
    cout << "ratio: " << d1 / d2 << endl;
}