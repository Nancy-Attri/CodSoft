#include <iostream>
using namespace std;

int main() {
    // Declaring the  variables
    double num1, num2;
    int choice;

    // Display menu or list
    cout << "***************SIMPLE CALCULATOR***************" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "1) Addition" << endl;
    cout << "2) Subtraction" << endl;
    cout << "3) Multiplication" << endl;
    cout << "4) Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the selected operation
    switch (choice) {
        case 1:
            cout << "Result is : " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result is : " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result is : " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Result is : " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please select a number between 1 and 4." << endl;
            break;
    }

    cout<<"***************END***************";

    return 0;
}
