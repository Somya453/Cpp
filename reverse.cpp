#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int reverse = 0;

    int dup=n;
    while(n>0){

        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }


    cout << reverse;

    if(reverse == dup){
        cout << "Palindrome!";
    }else{
        cout << "Not a Palindrome!";
    }
}