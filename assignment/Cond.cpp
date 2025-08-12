#include <iostream>
using namespace std;

void calculateCost(int P, int Q, int R, char choice, char subChoice) {
    int total = 0;

    switch (choice) {
        case 'A':
            total = P;
            switch (subChoice) {
                case 'X': total += 10; break;
                case 'Y': total += 15; break;
                case 'Z': total += 20; break;
                default: 
                    cout << "Invalid choice.";
                    return;
            }
            break;

        case 'B':
            total = Q;
            switch (subChoice) {
                case 'X': total += 10; break;
                case 'Y': total += 15; break;
                case 'Z': total += 20; break;
                default:
                    cout << "Invalid choice.";
                    return;
            }
            break;

        case 'C':
            total = R;
            switch (subChoice) {
                case 'X': total += 10; break;
                case 'Y': total += 15; break;
                case 'Z': total += 20; break;
                default:
                    cout << "Invalid choice.";
                    return;
            }
            break;

        default:
            cout << "Invalid choice.";
            return;
    }

    cout << total;
}

int main() {
    int P, Q, R;
    char choice, subChoice;
    
    cin >> P >> Q >> R;
    cin >> choice >> subChoice;

    calculateCost(P, Q, R, choice, subChoice);
    return 0;
}
