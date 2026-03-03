#include<iostream>

int main(void) { 
    float grade_input;
    std::cout << "grade input: ";
    std::cin >> grade_input;
    if (grade_input >= 90){
        std::cout << "this your final grade, A" << std::endl;
    } else if (grade_input>= 80) {
        std::cout << "this your final grade, B" << std::endl;
    } else if (grade_input>= 70) {
        std::cout << "this your final grade, C" << std::endl;
    } else if (grade_input>= 60) {
        std::cout << "this your final grade, D" << std::endl;
    } else {
        std::cout << "this your final grade, F" << std::endl;
    }
}   