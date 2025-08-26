#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    long sum=0;
for(int i=1; i<=n; i++) {
        if(i%3==0 && i%5==0) {
            cout << "fizzBuzz";
            continue;
        } else if(i%3==0) {
            cout << "Fizz";
            continue;
        } else if(i%5==0) {
            cout << "Buzz";
            continue;
        } else {
            sum=sum+i;
        }
        cout << sum << endl;
    }

    return 0;
}