
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, S, P;
        cin >> A >> B;;
        //Sum of inputs
        S = A + B;
        //Product of inputs
        P = A * B;
        //Print the results
        cout << S << " " << P << endl;
    }
    return 0;
}