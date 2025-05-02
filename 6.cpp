#include <bits/stdc++.h>
using namespace std ; 

int main (){
    int t ; 
    cin>>t ; 
    while(t--){
        int s ; 
        cin>>s;  
        
        if(s >100 ){
            s -= 10 ; 
        }
        cout<<s<<endl; 
    }
    return 0 ; 
}