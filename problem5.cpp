#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op; 

    cout << "Enter expression (e.g., 5 + 5): ";
    cin >> num1 >> op >> num2;

    if (op == '+') {
        cout << num1 + num2 << endl;
    } 
    else if (op == '-') {
        cout << num1 - num2 << endl;
    } 
    else if (op == '*') {
        cout << num1 * num2 << endl;
    } 
    else if (op == '/') {
        if (num2 != 0) {  
            cout << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    } 
    else {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}