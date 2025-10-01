#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    
    bool isNegative = false;
    if (num < 0) {
        isNegative = true;
        num = -num;
    }
    
    if (num == 0) {
        cout << "Result: 0" << endl;
        return 0;
    }
    
    string result = "";
    
    while (num > 0) {
        int digit = num % 10;
        char digitChar = '0' + digit;
        result = digitChar + result;
        num = num / 10;
    }
    
    if (isNegative) {
        result = '-' + result;
    }
    
    cout << "Result: " << result << endl;
    
    return 0;
}
