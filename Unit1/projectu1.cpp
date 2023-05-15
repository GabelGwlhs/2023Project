#include <iostream>

int main() {
    
    double pi = 3.15416;
    int num;
    std::cout<<"Please enter a whole number: ";
    std::cin>>num;//assigns entered num to num

    std::cout<<"A square with side length of"<<num;//computes values for a square and prints
    std::cout<<"\n  has a perimeter of "<<(4*num);
    std::cout<<"\n  has a area of "<<(num*num)<<"\n";
    std::cout<<"A circle with a diameter of "<<num;//computes values of a circle and prints
    double rad = num/2;
    std::cout<<"\n  has a radius of "<<rad;
    std::cout<<"\n  has a circumference of "<<(2*pi*rad);
    std::cout<<"\n  has an area of "<<(pi*rad*rad);
}
