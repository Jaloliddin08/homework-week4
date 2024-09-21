#include <iostream>

using namespace std;

int main() {
    int winter, rain;
    cout << "Is it winter? (1 for Yes, 0 for No): ";
    cin >> winter;
    cout << "Is it raining? (1 for Yes, 0 for No): ";
    cin >> rain;

    if (winter == 1) {
        cout << "Bus" << endl;
    } else if (rain == 1) {
        cout << "Walk" << endl;
    } else {
        cout << "Bike" << endl;
    }

    return 0;
}