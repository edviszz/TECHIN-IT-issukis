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
    int a = 0;
    int b = 0;
    int c = 0;

    std::cout << "Hour of takeoff: ";
    getAnswer(a, 23);

    std::cout << "Minutes of takeoff: ";
    getAnswer(b, 59);

    std::cout << "How long does the sleigh stay in the air? (in minutes): ";
    getAnswer(c);

    int totalMinutes = a * 60 + b;
    int minutesWhenLanding = totalMinutes + c;

    int v = (minutesWhenLanding / 60) % 12;
    int m = (minutesWhenLanding - (v * 60)) % 60;

    std::cout << "v: " << v << ", m: " << m << "." << std::endl;

    return 0;
}
