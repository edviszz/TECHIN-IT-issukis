#include <iostream>
#include <iomanip>

int main () {
    double price = 0.0;
    double sum = 0.0;
    int count = 0;

    std::cout << "Enter toy prices one at a time (enter 0 to finish): " << std::endl; // Asking for input

    while (true) {
        std::cin >> price; // Letting the user input multiple times

        if (price == 0) {
            break; // Breaking the loop when the user inputs 0
        }

        if (price > 10) { // Only counting the toys that cost more than 10 EUR
            sum += price;
            count++;
        }
    }

    std::cout << "\n" << "Total price of magical toys " << std::setprecision(2) << sum << " EUR" << std::endl; // Result
    std::cout << "Number of magical toys: " << count << std::endl; // Result

    return 0;
}

