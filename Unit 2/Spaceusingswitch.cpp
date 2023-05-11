#include <iostream>

int main() {
int eWeight;
int newWeight;
int planNum;


std:: cout<<"What is your earth weight?\n";
std:: cin>>eWeight;
std::cout<<"Enter a number for the planet: g";
std:: cin>>planNum;
switch(planNum){
  case 1:
  newWeight = eWeight*.38;
  break;
  case 2:
  newWeight = eWeight*.91;
  break;
  case 3:
  newWeight = eWeight*.38;
  break;
  case 4:
  newWeight = eWeight*2.34;
  break;
  case 5:
  newWeight = eWeight*1.06;
  break;
  case 6:
  newWeight = eWeight*.92;
  break;
  case 7:
  newWeight = eWeight*1.19;
  break;
}
std::cout<<"You would weigh "<<newWeight<<" on "<<planNum;
}
