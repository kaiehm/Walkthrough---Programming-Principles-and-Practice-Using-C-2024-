#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;
int main()
{
    vector<int> numbers = {1, 2, 3};
    vector<string> strings = {"zbi", "nmi"};
    cout << strings[0] << endl;

    // defining a vector size without specifying its contents
    vector<int> v1;
    cout << v1.size() << endl;
    v1.push_back(5);
    cout << v1.size() << endl;

    // reading values into a vector
    vector<int> zbi;
    int i;
    while (cin >> i)
    {
        zbi.push_back(i);
    }
}