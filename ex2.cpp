#include <iostream>
using namespace std;

void add(double a, double b) {
    cout << "Result: " << a + b << endl;
}

void subtract(double a, double b) {
    cout << "Result: " << a - b << endl;
}

void multiply(double a, double b) {
    cout << "Result: " << a * b << endl;
}

void divide(double a, double b) {
    if (b != 0)
        cout << "Result: " << a / b << endl;
    else
        cout << "Error! Division by zero." << endl;
}

int main() {
    double num1, num2;
    int choice;

    while (true) {
        cout << "Simple Calculator" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting calculator..." << endl;
            break;
        }

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (choice) {
            case 1: add(num1, num2); break;
            case 2: subtract(num1, num2); break;
            case 3: multiply(num1, num2); break;
            case 4: divide(num1, num2); break;
            default: cout << "Invalid choice! Please select between 1 and 5." << endl;
        }
    }

    return 0;
}
