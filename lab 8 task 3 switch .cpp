#include<iostream>
using namespace std;

int main() {
    int choice;

    // Display available membership plans
    cout << "Gym Membership Plans" << endl;
    cout << "1: Basic Plan  $30/month" << endl;
    cout << "2: Standard Plan  $50/month" << endl;
    cout << "3: Premium Plan  $70/month" << endl;
    cout << "4: VIP Plan  $100/month" << endl;
    cout << "Enter the number corresponding to your plan choice: ";
    
    cin >> choice;

    // Use switch statement to display the selected plan’s name and cost
    switch(choice) {
        case 1:
            cout << "Selected Plan: Basic Plan, Cost: $30/month" << endl;
            break;
        case 2:
            cout << "Selected Plan: Standard Plan, Cost: $50/month" << endl;
            break;
        case 3:
            cout << "Selected Plan: Premium Plan, Cost: $70/month" << endl;
            break;
        case 4:
            cout << "Selected Plan: VIP Plan, Cost: $100/month" << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
    }

    return 0;
}
