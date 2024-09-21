#include <iostream>
using namespace std;

int main() {
    const long long MIN_INT = -2147483647;
    const long long MAX_INT = 2147483647;
    long long number;
    cout << "Enter a number: ";
    cin >> number;
    if (number >= MIN_INT && number <= MAX_INT) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}