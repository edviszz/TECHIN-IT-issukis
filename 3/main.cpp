#include <iostream>
#include <string>

int main () {
    int num = 0;

    std::cout << "Enter a 4-digit number: "; // Asking for a number
    std::cin >> num; // Assigning the number to a variable

    int firstDigit = num/1000; // Getting the first digit
    int lastDigit = num % 10; // Getting the last digit

    int result = (firstDigit * 10) + lastDigit; // Combining the digits

    std::cout << "\n" << "The new number is: " << result << std::endl; // Output the result

    return 0;
}
