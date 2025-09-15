# task1
#include <iostream>
#include <algorithm>

int even_sum(int a, int b) {
    if (a > b) {
        return 0;
    }
    if (a % 2 == 0) {
        return a + even_sum(a + 2, b);
    } else {
        return even_sum(a + 1, b);
    }
}

int main() {
    int num1, num2;
    std::cout << "First number: ";
    std::cin >> num1;
    std::cout << "Second number: ";
    std::cin >> num2;

    
  if (num1 > num2) {
        std::swap(num1, num2);
    }

  int result = even_sum(num1, num2);
  std::cout << "Sum of even numbers in the range from " << num1 << " to " << num2 << " (inclusive): " << result << std::endl;

  return 0;
}
