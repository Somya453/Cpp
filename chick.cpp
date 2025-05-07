// Step 1: Read and understand the problem statement and sample test cases

// Click on 'Next' once you are ready to proceed.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int X, Y;
    cin>>X>>Y;
    int Z=X+Y;
    cout<<Z<<endl;
    
    if(X==Z && Z!=Y){
        cout<<"CHICKEN"<<endl;
    }
    if(Y==Z && Z!=X){
        cout<<"DUCK"<<endl;
    }
    if(Z==X || Z==Y){
        cout<<"ANY"<<endl;
    }
    else(Z!=X || Z!=Y){
        cout<<"NONE"<<endl;
    }
    }
    
    
