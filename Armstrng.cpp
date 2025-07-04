#include <iostream>
using namespace std;
// This code checks if a number is an Armstrong number or not.



class Solution {
public:
    bool isArmstrong(int n) {

        int sum = 0;
        int num = n;
        int digit = 0;

        // Count the number of digits
        while (num > 0) {
            digit=n % 10;
            sum=sum+(digit*digit*digit);
            num /= 10;
            
        }

        if (sum == n) return  true;
        else return false;


    }
};