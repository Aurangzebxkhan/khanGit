#include<iostream>
using namespace std;

int main() {
    int genre;
    
    // List the available genres
    cout << "Bookstore Purchase System" << endl;
    cout << "1: Fiction" << endl;
    cout << "2: Non-Fiction" << endl;
    cout << "3: Science" << endl;
    cout << "4: Mystery" << endl;
    cout << "5: Biography" << endl;
    cout << "Enter the number corresponding to the genre you want information about: ";
    
    cin >> genre;
    
    // Use switch statement to display genre information
    switch(genre) {
        case 1:
            cout << "Genre: Fiction\nDescription: Fiction books contain stories that are created from the imagination.\nPrice Range: $10 - $30" << endl;
            break;
        case 2:
            cout << "Genre: Non-Fiction\nDescription: Non-Fiction books are based on factual information and real events.\nPrice Range: $15 - $35" << endl;
            break;
        case 3:
            cout << "Genre: Science\nDescription: Science books cover topics in the field of science such as physics, biology, and chemistry.\nPrice Range: $20 - $50" << endl;
            break;
        case 4:
            cout << "Genre: Mystery\nDescription: Mystery books involve suspense and solving a crime or uncovering secrets.\nPrice Range: $10 - $25" << endl;
            break;
        case 5:
            cout << "Genre: Biography\nDescription: Biography books tell the life stories of real people.\nPrice Range: $15 - $40" << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
    }
    
    return 0;
}
