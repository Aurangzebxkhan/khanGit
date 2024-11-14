#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number between 1 and 5: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Snack: Chips, Price: $1.50" << endl;
            break;
        case 2:
            cout << "Snack: Chocolate, Price: $2.00" << endl;
            break;
        case 3:
            cout << "Snack: Soda, Price: $1.00" << endl;
            break;
        case 4:
            cout << "Snack: Popcorn, Price: $1.75" << endl;
            break;
        case 5:
            cout << "Snack: Candy, Price: $0.75" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }

    return 0;
}

