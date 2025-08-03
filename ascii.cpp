#include <stdio.h>
using namespace std;

int main() {
    char c;
    cin >> c;

    if (islower(c)) {
        c = toupper(c);
    } else if (isupper(c)) {
        c = tolower(c);
    }

    cout << c << endl;
    return 0;
}
