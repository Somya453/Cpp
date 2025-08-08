#include <iostream>
using namespace std;

int main(){
   char W;
   int age, SP;
   cout<<"Enter membership type (A/B): ";
   cin >> W;
   cout << "Enter age: ";
   cin >> age;
   cout << "Enter selling price: ";
   cin >> SP;

   int discount = 0;

    if (W == 'A' || W == 'B') {
        discount += 5; // base discount
        if (age >= 50) {
            discount += 5; // extra discount
        }
    }

    int discountPrice = SP - discount;
    cout << discountPrice;

}