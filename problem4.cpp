#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    int modifications = 0;
    if (n1 == n2 && n1 == n3 && n1 == n4) {
        modifications = 3;
    } 
    else if ((n1 == n2 && n1 == n3) || (n1 == n2 && n1 == n4) || (n1 == n3 && n1 == n4) || (n2 == n3 && n2 == n4)) {
        modifications = 2;
    }
    else if (n1 == n2 || n1 == n3 || n1 == n4 || n2 == n3 || n2 == n4 || n3 == n4) {
        modifications = 1;
    }
    cout << modifications << endl;

    return 0;
}