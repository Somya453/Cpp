//Swapping of 2 numbrers
#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter two numbers: ";
    cin >> a >> b;  

    c=a;
    a=b;
    b=c;

    cout << "After swapping: " << a << " " << b << endl;

    return 0;

}


// //Swapping of 2 numbers without the third variable
// #include <iostream>
// using namespace std;

// int main(){
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     cout << "After swapping: " << a << " " << b << endl;

//     return 0;

// }
