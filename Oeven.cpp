#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;   
    if (a%2==0 && b%2==0) {
        cout << "Both a and b are even numbers.";
    } else {
        cout << "At least one of a or b is not an even number.";
    }
    return 0;
}
