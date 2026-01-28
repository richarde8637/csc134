#include <iostream>
#include <iomanip>
#include <cstdint>

int main(void) {
    float input;
    std::cout << "Instert price: ";
    std::cin >> input;
    float tax_input = input * 0.08f;
    float total_after_tax = input + tax_input;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "receipt" << std::endl;
    std::cout << "Total before tax: $" << input << std::endl;
    std::cout << "tax: $" << tax_input << std::endl;
    std::cout << "Total: $" << total_after_tax <<std::endl;

    return 0;
}