#include <iostream>
#include <vector>
#include <map>

using namespace std;

int getVectorMode(const vector<int> &numbers)
{
    map<int, int> freqMap;

    for (int i : numbers)
    {
        freqMap[i]++;
    }

    int mode = 0;
    int maxFreq = -99999;

    for (const auto &pair : freqMap)
    {
        if (pair.second > maxFreq)
        {
            maxFreq = pair.second;
            mode = pair.first;
        }
    }

    return mode;
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 3, 2, 5, 6, 8, 1, 1, 1};
    cout << getVectorMode(numbers) << endl;
}