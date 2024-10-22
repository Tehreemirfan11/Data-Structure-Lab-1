#include <iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2, result;
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Division by zero." << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }
}
