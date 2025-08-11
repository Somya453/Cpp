#include <iostream>
using namespace std; // allows cout, cin without std::

void numberofdays(int M) {
    switch(M) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << 30;
            break;
        case 2:
            cout << 28; // Non-leap year
            break;
        default:
            cout << "Invalid";
    }
}

int main(){
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;
    numberofdays(month);
    return 0;
}
