#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string weather;
    int temp=0;
    cout<<"Enter weather and temperature: ";
    cin>>weather>>temp;
    
    
    if (weather == "sunny") {
        if (temp > 25) {
            cout << "Salad";
        } else {
            cout << "Sandwich";
        }
    } 
    else if (weather == "cloudy") {
        cout << "Soup";
    }

    else if (weather == "rainy") {
        cout << "Noodles";
    }


    return 0;
}