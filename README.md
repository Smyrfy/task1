# Homework
## task1
The program in C++ is designed to calculate the sum of all even numbers in a given range. The user enters two numbers, and if the first is greater than the second, the program automatically swaps them using std::swap to ensure the correct order of the boundaries.
The calculation is performed by the function even_sum, which is implemented recursively. It checks each number: if it is even — adds it to the sum and moves to the next even one; if it is odd — skips it and moves further.
For example, for the numbers 3 and 10 the program will sum 4, 6, 8 and 10, obtaining the result 28. This approach demonstrates the use of recursion instead of loops, automatic processing of range boundaries, and the work with conditional constructions in C++.

## task2

The program in C++ is designed to determine what number the user entered: positive, negative, or zero.
The user inputs a floating-point number of type double. After that, the program checks the value using conditional operators:

1. if the number is greater than zero, it outputs + number;

2. if the number is less than zero, it outputs - number;

3. if the number is equal to zero, it outputs zero.

This approach makes it possible to quickly classify any entered number. The program uses standard input/output through cin and cout, as well as the if ... else if ... else construction for condition checking.
The program is simple but clearly demonstrates the basic capabilities of C++: working with input, conditional expressions, and outputting the result.

## task3

The program in C++ is designed to work with strings. It outputs a given string and calculates its length.
In the code, a string is created as a constant character array:

const char* str = "dowgwww";

Then the program prints this string using cout.
To determine the length, the standard function strlen from the <cstring> library is used. It counts the number of characters in the string until the terminating \0. In this case, the length of the word "dowgwww" is 7 characters.
After that, the program outputs a message with the result, showing the number of characters in the string.
This example demonstrates basic work with C-strings (const char*), the use of the <cstring> library, and the strlen function to calculate string length.

## task4

The program in C++ converts an integer into a string.
The user enters a number, then the program checks several conditions:
- If the number is 0, the string becomes "0".
- If the number is negative, the flag isNegative = true is set, and the number is made positive for further processing.
Next, a while loop extracts the last digit of the number using num % 10, converts it to a character, and adds it to the beginning of the string. Then the number is divided by 10 (num /= 10) to move to the next digit.
After the loop, if the number was negative, the "-" character is added to the start of the string.
As a result, the user gets the string representation of the number, for example:

Input: -123 → Output: "-123"

Input: 456 → Output: "456"

This example demonstrates manual conversion of numbers to strings, working with loops, conditions, and characters in C++.

## task5

The program in C++ finds all six-digit numbers where the sum of the first three digits equals the sum of the last three digits — so-called “lucky tickets.”
A for loop iterates through all numbers from 0 to 999999. For each number:

1. left takes the first three digits (i / 1000),
2. right takes the last three digits (i % 1000).

Then the sums of the digits are calculated:

- sumLeft — the sum of digits in left,
- sumRight — the sum of digits in right.

If the sums are equal, the number is printed with a fixed width of 6 digits (setw(6) and setfill('0')).
The program demonstrates:

- arithmetic operations on numbers,
- extracting digits using division and modulo,
- conditional statements and formatted output.




