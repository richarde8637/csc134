#include<iostream> 

int main(void){
    int whatever_i_want;
   std::cout << "You triple backflip off a building onto a bird, that bird says where do we go?\n1) sin30 degrees\n2) sin315 degrees\n\noption: ";
   std::cin >> whatever_i_want;
   if (whatever_i_want == 1){
    std::cout << "You get sucked into an airplane engine and die a horrible death";
   } else if (whatever_i_want == 2) {
    std::cout << "The Flash(Grant Gustin, not that other guy) running at lightspeed cuts through you and you die a horrible death but atleast you met The Flash"
   }
}