#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    string x, y, z;
    cout << "Enter 3 integers;" << endl;
    cin >> x >> y >> z;

    string smallest, mid, greatest;

    if (x <= y && x <= z)
    {
        smallest = x;
        if (y <= z)
        {
            mid = y;
            greatest = z;
        }
        else
        {
            mid = z;
            greatest = y;
        }
    }
    else if (y <= x && y <= z)
    {
        smallest = y;
        if (x <= z)
        {
            mid = x;
            greatest = z;
        }
        else
        {
            mid = z;
            greatest = x;
        }
    }
    else
    {
        smallest = z;
        if (y <= x)
        {
            mid = y;
            greatest = x;
        }
        else
        {
            mid = x;
            greatest = y;
        }
    }

    cout << smallest << ", " << mid << ", " << greatest << endl;
}