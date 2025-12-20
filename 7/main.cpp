#include <iostream>

// The method asks for a valid number. It should be more than 0 and less than the given value (if defined). Argument maxNum is optional.
void getAnswer (int &var, int maxNum = 0) {
    while (true)
    {
        std::cin >> var; // Let the user input, then store it in a variable.
        if (maxNum == 0) {
            if (var >= 0) break;
            else std::cout << "The number can't be less than 0." << std::endl;
        } else {
            if (var >= 0 && var <= maxNum) break; // Makes sure it's not bigger than the max number given.
            else std::cout << "The number can't be less than 0 or more than " << maxNum << "." << std::endl; // Informs the user about the error.
        }
    }
    return;
}

int main () {
    int n = 0; // Number of rows.
    int k = 0; // Number of seats.

    std::cout << "How many rows are there? ";
    getAnswer(n);

    std::cout << "How many seats are in the first row? ";
    getAnswer(k);

    int s = (k + 2) * n; // Architect's formula.

    std::cout << "\n" << "Santa has to order " << s << " seats." << std::endl; // Result.

    return 0;
}
