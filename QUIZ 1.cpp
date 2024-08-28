#include <iostream>
using namespace std;

int main() {
    int choice;
    int num1, num2;
    int result;

    cout << "Calculator Menu:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Modulus" << endl;
    
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter First Value: ";
    cin >> num1;
    
    cout << "Enter Second Value: ";
    cin >> num2;

    switch(choice) {
        case 1:
            result = num1 + num2;
            cout << "The Result is: " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "The Result is: " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "The Result is: " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "The Result is: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        case 5:
            if (num2 != 0) {
                result = num1 % num2;
                cout << "The Result is: " << result << endl;
            } else {
                cout << "Error: Modulus by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please choose a number between 1 and 5." << endl;
            break;
    }

    return 0;
}
