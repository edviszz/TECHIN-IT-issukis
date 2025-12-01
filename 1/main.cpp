#include <iostream>


int getLength() {
    int length;
    std::cout << "Length: ";
    std::cin >> length;
    return length;
}

int getWidth() {
    int width;
    std::cout << "Width: ";
    std::cin >> width;
    return width;
}

int getPricePerSquareMeter() {
    int price;
    std::cout << "Price per square meter: ";
    std::cin >> price;
    return price;
}

int main() {
    int length = 0;
    int width = 0;
    int m2price = 0;

    length = getLength();
    width = getWidth();
    m2price = getPricePerSquareMeter();

    int area = length * width;
    int areaOfTilesBought = area + (area * 5 / 100); // adding 5% extra
    int totalCost = areaOfTilesBought * m2price;

    std::cout << "Total price: " << totalCost << std::endl;
    return 0;
}