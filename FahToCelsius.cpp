#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	float fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    float celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}