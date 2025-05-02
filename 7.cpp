#include <bits/stdc++.h>
using namespace std ; 

class Solution {
    public:
        int countDigit(int n) {
            
            cin>>n;
            cout<<n;
        }
    
        int main (){
            int t ; 
            cin>>t ; 
            while(t--){
                int s ; 
                cin>>s;  

                if(s >100 ){
                    s -= 10 ; 
                }
                cout<<s<<"\n"; 
            }
            return 0 ; 
        }
};