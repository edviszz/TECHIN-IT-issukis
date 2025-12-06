#include <iostream>

int main () {
    int x = 0;
    int y = 0;

    std::cout << "How many hours does the clock show? ";
    std::cin >> x;

    std::cout << "How many minutes does the clock show? ";
    std::cin >> y;

    int m = 0;
    int s = 0;

    m = (x * 60) + y;
    s = m * 60;

    std::cout << "\n" << "Minutes passed: m = " << m << std::endl;
    std::cout << "Seconds passed: s = " << s << std::endl;

    return 0;
}
