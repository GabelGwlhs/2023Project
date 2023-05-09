#include <iostream>

int main() {
  // Add your code below  
  double fg = 9.81;// acceleration of gravity
  double fm = 3.73;//acceleration of mar
  double weight;
  std::cout<<"Enter in the weight of something: ";
  std::cin>>weight;//assigns input to weight
  weight = weight*fm/fg;//calcuates weight in mars
  std::cout<<"You weigh "<<weight<<" Kg on mars!\n";//displays

  double distance;
  std::cout<<"Enter a distance in miles: ";
  std::cin>>distance;//assigns input to distance
  distance= distance*1.609;// caluclates the distance in KM
  std::cout<<"The distance in kilometers is "<<distance;//dispalys
}
