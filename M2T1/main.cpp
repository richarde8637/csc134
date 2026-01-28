#include <iostream>
#include <iomanip>
#include <string>

int main(void) {
    std::string name;
    int apples;
    float price;
    std::cout << "Name: ";
    std::cin >> name;
    std::cout << "Number of apples: ";
    std::cin >> apples;
    std::cout << "Price per apple: ";
    std::cin >> price;
    float buyout = price * apples;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << name << std::endl;
    std::cout << "Quantity is " << apples << " apples" << std::endl;
    std::cout << "Price per apple " << price << " dollars" << std::endl;
    std::cout << "Price for buyout is " << buyout << " dollars" << std::endl;
    return 0;
    // first time daley was nice
}