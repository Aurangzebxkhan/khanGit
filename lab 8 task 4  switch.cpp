#include<iostream>
using namespace std;

int main() {
    int option;
    string feedback;

    
    
    cout << "Customer Support Menu" << endl;
    cout << "1: Billing" << endl;
    cout << "2: Technical Support" << endl;
    cout << "3: Account Information" << endl;
    cout << "4: Feedback" << endl;
    cout << "5: Exit" << endl;
    cout << "Please enter your choice (1-5): ";
    
    cin >> option;
    
    
    switch(option) 
    {
        case 1:
            cout << "Connecting to Billing Department..." << endl;
            cout<< endl;
            cout<< " Welcome to billing department"<<endl;
            break;
        case 2:
            cout << "Connecting to Technical Support..." << endl;
            cout<< endl;
            cout<< " Welcome to  Technical Support"<<endl;
            break;
        case 3:
            cout << "Connecting to Account Information..." << endl;
            cout<< endl;
            cout<< " Welcome to Account Information"<<endl;
            break;
        case 4:
        cout<<"Give us your feedback"<<endl;
        cin>>feedback;
            cout << "We appreciate your feedback!" << endl;
            break;
        case 5:
            cout << "Thank you for using our service. Goodbye!" << endl;
            return 0; 
        default:
            cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
    }
    
    return 0;
}
