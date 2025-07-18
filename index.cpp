#include <iostream>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        //your code goes here

        // cin>>n;
        if(n==1) return false;
        for(int i=2; i<n; i++ ){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
};
