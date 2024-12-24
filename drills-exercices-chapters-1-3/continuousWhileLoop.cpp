#include <iostream>
#include <cmath>
#include <vector>
#include <ranges>

using namespace std;

void convertValueUnit(double &value, char unit)
{
    switch (unit)
    {
    case 'c': // cm
        cout << "value in cm, no conversion needed" << endl;
        break;
    case 'm':         // m
        value *= 100; // convert to cm
        cout << "converted from meters to centimeters" << endl;
        break;
    case 'f':               // ft
        value *= 12 * 2.54; // convert to in then to cm
        cout << "converted from feet to centimeters" << endl;
        break;
    case 'i':          // in
        value *= 2.54; // conver to cm
        cout << "converted from inches to centimeters" << endl;
        break;
    default:
        cout << "no unit or unit is unknown, unit will be auto set to cm" << endl;
        break;
    }
}
int main()
{
    double value, sumOfValues = 0;
    char unit;
    int nbOfValues = 0;
    vector<double> numbers;
    double minv = 9999999999, maxv = -9999999999;
    while (cin >> value && cin >> unit)
    {
        ++nbOfValues;
        sumOfValues += value;
        numbers.push_back(value);
        convertValueUnit(value, unit);
        if (value < minv)
        {
            minv = value;
            cout << "sallest value so far is " << minv << endl;
        }
        if (value > maxv)
        {
            maxv = value;
            cout << "largest value sor far is " << maxv << endl;
        }
    }
    cout << "sum of read values: " << sumOfValues << endl;
    cout << "number of read values: " << nbOfValues << endl;
    cout << "all read values" << endl;

    for (double number : numbers)
    {
        cout << number << endl;
    }
}