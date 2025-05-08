#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t; 
    cin >> t ; 
    while(t--){
        int X, Y , Z;
        cin>>X>>Y>>Z;
        if(Z%X == 0  && Z%Y == 0 ) {
            cout<<"ANY"<<endl;
        }
        if(Z%X == 0 ){
            cout<<"CHICKEN"<<endl;
        }
        if(Z%Y == 0 ){
            cout<<"DUCK"<<endl;
        }
        else {
            cout<<"NONE"<<endl;
        }
    }
}