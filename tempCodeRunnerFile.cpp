#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int num = n;
    int digit = 0;


        // Count the number of digits
        while (num > 0) {
            digit = num % 10;
            num /= 10;
            // Calculate the sum of cubes of digits
            sum = sum + (digit * digit * digit);


        }

        if (sum == n) {
            cout << "Armstrong Number!";
        } else {
            cout << "Not an Armstrong Number!";
        }

    }

