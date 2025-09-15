#include <iostream>
using namespace std;

int main() {
    double x;
    cout << "Enter a number: ";
    cin >> x;

    if (x > 0) {
        cout << "+ number" << endl;
    } else if (x < 0) {
        cout << "- number" << endl;
    } else {
        cout << "zero" << endl;
    }

    return 0;
}
