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
    int N = 0;

    std::cout << "N: ";
    getAnswer(N, 50);
    std::cout << std::endl;

    // Print the top part of the border.
    for (int i = 1; i <= 2 * N; i++) std::cout << "#";
    std::cout << "###" << std::endl;

    // Loop that goes through every row.
    for (int row = 1; row <= N; row++) {
        std::cout << "# "; // Print the left part of the border.

        // Loop that goes through every column.
        for (int col = 1; col <= N; col++) {
            int sum = row + col;

            // Decide which symbol to write.
            if (sum % 3 == 0 && sum % 5 == 0) std::cout << "G ";
            else if (sum % 3 == 0) std::cout << "T ";
            else if (sum % 5 == 0) std::cout << "S ";
            else std::cout << ". ";
        }

        std::cout << "# " << std::endl; // Print the right part of the border.
    }

    // Print the bottom part of the border.
    for (int i = 1; i <= 2 * N; i++) std::cout << "#";
    std::cout << "###" << std::endl;

    return 0;
}
