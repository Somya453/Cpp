#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    long long total_sum = 0;   // use long long for large N

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            continue;   // FizzBuzz
        } else if (i % 3 == 0) {
            continue;   // Fizz
        } else if (i % 5 == 0) {
            continue;   // Buzz
        } else {
            total_sum += i;   // add number
        }
    }

    cout << total_sum << endl;
    return 0;
}
