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
        if(B >= A && B <= C && (A+C)%2 == 0 ){
            cout<<B<<"\n" ;
        }
        else{
            cout<<-1<<"\n"; 
        }
    }
    return 0;
}