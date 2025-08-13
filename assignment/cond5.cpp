#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int Amt;
    cout<<"Enter amount: ";
    cin>>Amt;

    if(Amt>10000){
        cout<<"Large";
    }
    else if(Amt>=1000 && Amt<=10000){
        cout<<"Medium";
    }
    else{
        cout<<"Small";
    }

    return 0;
}