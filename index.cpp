#include <iostream>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        // 1 is not prime
        if (n <= 1) return false;

        // Check divisibility from 2 to sqrt(n) for efficiency
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    int number;
    cin >> number;  // Taking input

    Solution obj;
    bool result = obj.isPrime(number);  // Calling the isPrime function

    // Output
    if (result)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;

    return 0;
}
