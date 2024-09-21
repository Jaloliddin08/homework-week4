#include <iostream>
using namespace std;

int main() {
    char sex;
    float height;

    cout << "Enter sex (M for Male, F for Female): ";
    cin >> sex;
    cout << "Enter height (in meters): ";
    cin >> height;
    if (sex == 'M' || sex == 'm') {
        if (height < 1.70) {
            cout << "Short" << endl;
        } else if (height < 1.85) {
            cout << "Normal" << endl;
        } else {
            cout << "Tall" << endl;
        }
    } else if (sex == 'F' || sex == 'f') {
        if (height < 1.60) {
            cout << "Short" << endl;
        } else if (height < 1.75) {
            cout << "Normal" << endl;
        } else {
            cout << "Tall" << endl;
        }
    } else {
        cout << "Invalid input for sex. Please enter 'M' for Male or 'F' for Female." << endl;
    }
    return 0;
}