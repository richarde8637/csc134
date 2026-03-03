#include <iostream>
#include <iomanip>
#include <string>
int main(void) {
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Q1" << std::endl;
    {
    std::string name;
    float starting_balance;
    float deposit_amount;
    float withdraw_amount;
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter starting balance: ";
    std::cin >> starting_balance;
    std::cout << "Enter deposit amount: ";
    std::cin >> deposit_amount;
    std::cout << "Enter withdraw amount: ";
    std::cin >> withdraw_amount;
    float remaining_balance = starting_balance + deposit_amount - withdraw_amount;
    int account_number = *(int*)(name.c_str());
    std::cout << "Name: " << name << std::endl;
    std::cout  << "Account Number: " << account_number << std::endl;
    std::cout << "Account balance: " << remaining_balance << std::endl;
    }
    std::cout << "Q2" << std::endl;
    {
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
    const float COST_PER_CUBIC_FOOT = 0.3;
    const float CHARGE_PER_CUBIC_FOOT = 0.52;
    float cost = COST_PER_CUBIC_FOOT * volume;
    float customer_cost = CHARGE_PER_CUBIC_FOOT * volume; 
    float profit = customer_cost - cost; 
    std::cout << "Total cost: " << cost << std::endl;
    std::cout << "Customer Cost: " << customer_cost << std::endl;
    std::cout << "Profit: " << profit << std::endl;
    }
}