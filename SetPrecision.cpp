


// // 🔧 Why use setprecision(1)?

// The problem says to show exactly one decimal place.

// It's a formatting tool to make your output match the required format exactly, which is very important in coding problems and tests.




#include <iostream>
#include <iomanip> // Required for setprecision
using namespace std;

void fahrenheit_to_celsius(float n) {
    float tempInCelsius = ((n - 32.0) * 5.0) / 9.0;
    cout << fixed << setprecision(1) << tempInCelsius << endl;
}


int main() {
    float f;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;

    fahrenheit_to_celsius(f);

    return 0;
}

