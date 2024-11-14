#include<iostream>
using namespace std;

int main() {
    int choice;
    
    
    cout << "Hotel Reservation System" << endl;
    cout << "1: Single Room" << endl;
    cout << "2: Double Room" << endl;
    cout << "3: Suite" << endl;
    cout << "4: Deluxe Suite" << endl;
    cout << "Enter the number corresponding to your room choice: ";
    
    cin >> choice;
    
    // Use switch statement to match the input with the room type
    switch(choice) {
        case 1:
            cout << "Room Type: Single Room, Cost per Night: $100" << endl;
            break;
        case 2:
            cout << "Room Type: Double Room, Cost per Night: $150" << endl;
            break;
        case 3:
            cout << "Room Type: Suite, Cost per Night: $250" << endl;
            break;
        case 4:
            cout << "Room Type: Deluxe Suite, Cost per Night: $400" << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
    }

    return 0;
}
