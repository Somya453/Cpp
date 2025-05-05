// Update the program below to solve the problem
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> C;
        B = (A+C)/2 ; 
        if((A+C)%2 == 0 ){
            cout<<B<<"\n" ;
        }
        else{
            cout<<-1<<"\n"; 
        }
    }
    return 0;
}