//TASK 1 "SIMPLE CALCULATOR"
// Develop a calculator program that performs basic arithmetic
// operations such as addition, subtraction, multiplication, and
// division. Allow the user to input two numbers and choose an
// operation to perform.

#include <iostream>

using namespace std;

int main() {

    char operation;

    double number1, number2, result;
    cout << "\t***SIMPLE CALCULATOR***\n";

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    cout << "Enter operation you want to perform (+,-,*,/): ";

    cin >> operation;

    switch(operation) {
        case '+':
            result = number1 + number2;
            cout << "Result: " << result;
            break;

        case '-':
            result = number1 - number2;
            cout << "Result: " << result;
            break;

        case '*':
            result = number1 * number2;
            cout << "Result: " << result;
            break;
            
        case '/':
            if (number2 != 0) {
                result = number1 / number2;
                cout << "Result: " << result;
            } 
            else 
            {
                cout << "Error: Division by zero!";
            }
            break;
        default:
            cout << "Invalid operation!";
    }

    return 0;
}
