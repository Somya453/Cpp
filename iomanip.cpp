// iomanip stands for input/output manipulators.
// It is a C++ standard library header that lets you format the way things are printed (output) or taken as input.
#include <iostream>
#include <iomanip> // Required for setprecision
using namespace std;

// Function to convert Fahrenheit to Celsius
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
