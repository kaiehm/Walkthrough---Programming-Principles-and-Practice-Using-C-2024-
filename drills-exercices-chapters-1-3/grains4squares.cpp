#include <iostream>
#include <cmath>

using namespace std;

int calculateGrainsForSquares(int squares)
{
    return log2(squares);
}

int main()
{
    cout << "Here is the concept of the game," << endl;
    cout << "There is an old story that the emperor wanted to thank the inventor of the game of chess and asked the inventor to name his reward. The inventor asked for one grain of rice for the first square, 2 for the second, 4 for the third, and so on, doubling for each of the 64 squares" << endl;
    cout << "This program calculates how many squares need to be covered to ensure X grains of rice." << endl;
    cout << "Insert a value X for how many squares you want covered." << endl;
    cout << ">>> ";
    int x;
    cin >> x;
    cout << calculateGrainsForSquares(x) << endl;
}