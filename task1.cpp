#include <iostream>
#include <limits>

int even_sum(int a, int b) {
    if (a > b) return 0;
    if (a % 2 == 0) return a + even_sum(a + 2, b);
    else return even_sum(a + 1, b);
}

int get_positive_int(const std::string& prompt) {
    int num;
    while (true) {
        std::cout << prompt;
        std::cin >> num;

        if (std::cin.fail() || num <= 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Error! Enter a positive integer.\n";
        } else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return num;
        }
    }
}

int main() {
    std::cout << "Program calculates the sum of even numbers in a range.\n";
    std::cout << "Enter positive integers only.\n\n";

    int num1 = get_positive_int("First number: ");
    int num2 = get_positive_int("Second number: ");

    if (num1 > num2) std::swap(num1, num2);

    int result = even_sum(num1, num2);
    std::cout << "Sum of even numbers from " << num1 << " to " << num2 << " (inclusive): " << result << std::endl;

    return 0;
}
