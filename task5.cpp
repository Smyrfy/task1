#include <iostream>
#include <iomanip> // для setw і setfill
using namespace std;

int main() {
    for (int i = 0; i <= 999999; i++) {
        int left = (i / 1000);
        int right = (i % 1000);

        
        int sumLeft = (left / 100) + (left / 10 % 10) + (left % 10);
        int sumRight = (right / 100) + (right / 10 % 10) + (right % 10);

        if (sumLeft == sumRight) {
            cout << setw(6) << setfill('0') << i << endl;
        }
    }
    return 0;
}
