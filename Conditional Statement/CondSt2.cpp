//Example of conditional compilation 
#include <iostream>
using namespace std;



// void TotalEntryFee(int Age, int TicketPrice, char Gender){

//     cin >> Age >> TicketPrice >> Gender;
//     float TotalFee;
//     if (Age < 15) {
//         TotalFee = TicketPrice / 2; // Half price for children
//     } else if (Age >= 15 && Gender == 'M') {
//         TotalFee = TicketPrice + 20; // 20 units extra for males
//     } else {
//         TotalFee = TicketPrice; // Full price for adults
//     }

//     // Output the total entry fee
//     cout << "Total Entry Fee: " << TotalFee << endl;
// }

// int main(){

//     int Age, TicketPrice;
//     char Gender;

//     cout << "Enter Age: " << endl;
//     cin >> Age;
//     cout << "Enter Ticket Price: " << endl;
//     cin >> TicketPrice;
//     cout << "Enter Gender (M/F): ";
//     cin >> Gender;
//     TotalEntryFee(Age, TicketPrice, Gender);
//     return 0;
// }


int main() {
    int Age, TicketPrice;
    char Gender;

    cout << "Enter Age: " << endl;
    cin >> Age;
    cout << "Enter Ticket Price: " << endl;
    cin >> TicketPrice;
    cout << "Enter Gender (M/F): ";
    cin >> Gender;
    int FinalPrice=TicketPrice+20;


    if (Age < 15) {
        cout << TicketPrice / 2 << endl; // Half price for children
    } else if (Gender == 'M') {
        cout << FinalPrice << endl; // Extra charge for males
    } else {
        cout << TicketPrice << endl; // Full price for adults
    }

    return 0;
}