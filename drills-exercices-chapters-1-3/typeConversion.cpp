#include <iostream>
using namespace std;
/**
 * In cpp we basically have two types of type conversion
 * Widening, in which a conversion from type a to b preserves inforamtion, such as char to int
 * Narrowing, in which the conversion loses information, such as int to char
 * in the example of int to char, it data loss is very possible because an int is 4 bytes, whereas a char is 1 byte
 * this behavior is generally to be avoided, beceause don't lose your data my g
 */
int main()
{
    // copied from ppp
    // decomment when to use

    // double d = 0;
    // while (cin >> d)
    // {
    //     int i = d;
    //     char c = i;
    //     cout << d << endl
    //          << i << endl
    //          << c << endl;
    // }

    /**
     * Man, I just learn new stuff every day
     * just discovered that there are FOUR ways to init a var in cpp
     */

    int x0 = 7.8;   // narrows, some comps warn
    int x1{7.8};    // doesn't narrow => compilation err
    int x2 = {7.8}; // doesn't narrow => compilation err
    int x3(7.8);    // narrows, narrows some comps warn, could also add = before the parentheses, making 5 ways to init a var ? maybe there are more
}