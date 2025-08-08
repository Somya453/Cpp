//Check whether the function is positive, negative or zero

#include <iostream>
using namespace std;

void printSign(int N) {
    if (N > 0) {
        cout << "The number is positive";
    }
    else if (N < 0) {
        cout << "The number is negative";
    }
    else {
        cout << "The number is zero";
    }
}
 int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    printSign(num);
    return 0;
 }