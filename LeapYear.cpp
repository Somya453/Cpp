#include <iostream>
using namespace std;

void checkLeapYear(int N) {
    if ((N % 4 == 0 && N % 100 != 0) || (N % 400 == 0)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main() {
    int N;
    cout<<"Enter a year: ";
    cin >> N;

    checkLeapYear(N);
    return 0;
}
