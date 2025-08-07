//Conditoinal Statements 

#include <iostream>
using namespace std;

void printSquare(int N) {
    if (N % 2 == 0) {
        cout << N * N << endl;
    } else {
        N = N + 1;
        cout << N * N << endl;
    }
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    printSquare(N);
    return 0;

}