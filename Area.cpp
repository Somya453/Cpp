#include <iostream>
using namespace std;

int main() {
    int length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    if (length > 0 && width > 0) {
        cout << "Area is " << length * width << endl;
        cout << "Perimeter is " << 2 * (length + width) << endl;
    } else if (length * width <= 2 * (length + width)) {
        cout << "Perimeter is greater than the area." << endl;
    } else {
        cout << "Area is greater than the perimeter." << endl;
    }

    return 0;
}
