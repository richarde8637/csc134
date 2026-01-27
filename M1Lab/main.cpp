#include <iostream>
#include <iomanip>
#include <string>

int main(void) {
    std::string name = "Jane Smith";
    int apples = 100;
    float price = 0.25f;
    float buyout = price * apples;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << name << std::endl;
    std::cout << "Quantity is " << apples << " apples" << std::endl;
    std::cout << "Price per apple " << price << " cents" << std::endl;
    std::cout << "Price for buyout is " << buyout << " dollars" << std::endl;
    return 0;
}