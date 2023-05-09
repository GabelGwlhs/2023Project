#include <iostream>

int main() {
  
  double tempf;
  double tempc;
  
  // Ask the user
  std::cout<<"Enter a temperature in new york:\n";
  std::cin>>tempf;//user enters temp and assigns it to tempf
  
  
  tempc = (tempf - 32) / 1.8;//changes it to celcius
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  //prints the temp in celcius
}
