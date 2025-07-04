#include <iostream>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int sum = 0;
        int num = n;
        int digits = 0;

        // Count the number of digits
        while (num > 0) {
            num /= 10;
            digits++;
        }

        num = n;

        // Calculate the sum of the cubes of each digit
        while (num > 0) {
            int digit = num % 10;
            sum += pow(digit, digits);
            num /= 10;
        }

        return sum == n;
    }
};