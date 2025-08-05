#include <iostream>
#include <cmath> // for pow()
using namespace std;

// This code checks if a number is an Armstrong number or not.

class Solution {
public:
    bool isArmstrong(int n) {
        int sum = 0;
        int num = n;
        int digits = 0;

        // Count number of digits
        int temp = n;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        // Calculate sum of digits raised to power of total digits
        temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        return (sum == n);
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    Solution obj;
    if (obj.isArmstrong(number)) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not an Armstrong Number" << endl;
    }

    return 0;
}
