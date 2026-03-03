#include<iostream>
#include<iomanip>

int main(void){
    std::cout << std::setprecision(2) << std::fixed;
    float length;
    std::cout << "Whats your length? ";
    std::cin >> length;
    float height;
    std::cout << "Whats your height? ";
    std::cin >> height;
    float width;
    std::cout << "Whats your width? ";
    std::cin >> width;
    float volume = length * width * height;
    const float COST_PER_CUBIC_FOOT = 0.23;
    const float CHARGE_PER_CUBIC_FOOT = 0.5;
    float cost = COST_PER_CUBIC_FOOT * volume;
    float customer_cost = CHARGE_PER_CUBIC_FOOT * volume; 
    float profit = customer_cost - cost; 
    std::cout << "Total cost: " << cost << std::endl;
    std::cout << "Customer Cost: " << customer_cost << std::endl;
    std::cout << "Profit: " << profit << std::endl;
}