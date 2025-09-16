#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cout << "Введіть число: ";
    cin >> num;

    string str = to_string(num); // конвертуває число в рядочокчоккчокчко
    cout << "Число як рядок: " << str << " рядків." << endl;

    return 0;
}
