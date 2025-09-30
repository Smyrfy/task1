#include <iostream>
using namespace std;

int main() {
    const char* str = "Length";
    
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    cout << "Row: " << str << endl;
    cout << "Row length: " << length << " symbols." << endl;

    return 0;
}
