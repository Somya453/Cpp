#include <iostream>
using namespace std;

void buyCar(char name, char model) {
    int basePrice = 0;
    int extra = 0;

    // Step 1: Check valid name
    switch(name) {
        case 'B': basePrice = 1000000; break;
        case 'S': basePrice = 1500000; break;
        case 'I': basePrice = 2000000; break;
        case 'F': basePrice = 3000000; break;
        default:
            cout << "Invalid name.";
            return;
    }

    // Step 2: Check valid model
    switch(model) {
        case 'B': extra = 0; break;        // Base
        case 'D': extra = 50000; break;    // Deluxe
        case 'P': extra = 150000; break;   // Premium
        default:
            cout << "Invalid model.";
            return;
    }

    // Step 3: Print total cost
    cout << basePrice + extra;
}

int main() {
    char name, model;
    cout << "Enter car name and model: ";
    cin >> name >> model;
    buyCar(name, model);
    return 0;
}
