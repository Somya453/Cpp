// Solution as follows
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int X = 3;
    int Y = 4;
    int Z = 12;
    if ((Z % X == 0) && (Z % Y == 0))
    {
        cout << "Z is divisible by both X and Y" << endl;
    }
    else if (Z % X == 0)
    {
        cout << "Z is divisible only by X" << endl;
    }
    else if (Z % Y == 0)
    {
        cout << "Z is divisible only by Y" << endl;
    }
    else
    {
        cout << "Z is divisible by neither X nor Y" << endl;
    }
    X = 3;
    Y = 5;
    Z = 13;
    if ((Z % X == 0) and(Z % Y == 0))
    {
        cout << "Z is divisible by both X and Y" << endl;
    }
    else if (Z % X == 0)
    {
        cout << "Z is divisible only by X" << endl;
    }
    else if (Z % Y == 0)
    {
        cout << "Z is divisible only by Y" << endl;
    }
    else
    {
        cout << "Z is divisible by neither X nor Y" << endl;
    }
    return 0;
}