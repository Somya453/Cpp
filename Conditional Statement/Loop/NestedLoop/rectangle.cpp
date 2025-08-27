#include<iostream>
using namespace std;

// int main() {
//     for (int i = 1; i <= 5; i++) {
//         for (int j = 1; j <= 5; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


int main(){
    for (int i = 1; i <= 5; i++) {
        cout << "*";                //Print first * rows
        }
        cout << " "<<endl;          //Print space after first * rows and before second * rows

    for (int j = 1; j <= 5-2; j++) {
            cout << "*";            //Print first * of middle rows
            for (int k = 1; k <= 5-2; k++) {
            cout << " ";
            }
            cout << "*";            //Print second * of middle rows
            cout << " "<<endl;
    }  
    for (int i = 1; i <= 5; i++) {
        cout << "*";                //Print last * rows
    }
    // cout << " "<<endl;
    return 0;
}