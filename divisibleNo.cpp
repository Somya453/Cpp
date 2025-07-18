#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 5 == 0 && num % 3 == 0) {
        cout << "The number is divisible by both 5 and 3." << endl;
    } else {
        cout << "The number is not divisible by both 5 and 3." << endl;
    }

    
}
