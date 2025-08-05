//Swapping of 2 numbers without the third variable 
//Suppose a=10 and b=5
//After swapping a=5 and b=10
#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    a = a + b;   //10+5=15 ---> here it stores value of a

    b = a - b;   //15-5=10 ---> here it stores value of b and b is now 10

    a = a - b;   //15-10=5 ---> here it stores value of a and a is now 5

    cout << "After swapping: " << a << " " << b << endl;

    return 0;

}