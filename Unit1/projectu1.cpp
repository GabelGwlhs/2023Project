#include <iostream>
#include<cmath>

int main() {

    double pi = 3.15416;
    int num;
    std::cout<<"Please enter a whole number: ";
    std::cin>>num;//assigns entered num to num

    std::cout<<"A square with side length of"<<num;//computes values for a square and prints
    std::cout<<"\n\t  has a perimeter of "<<(4*num);
    std::cout<<"\n\t has a area of "<<(num*num)<<"\n";
    std::cout<<"A circle with a diameter of "<<num;//computes values of a circle and prints
    double rad = num/2;
    std::cout<<"\n\t  has a radius of "<<rad;
    std::cout<<"\n\thas a circumference of "<<(2*pi*rad);
    std::cout<<"\n\t has an area of "<<(pi*rad*rad);
    //An equilateral triangle with side length of 7
    //    has a perimeter of 21
    //    has an area of 21.218
    std::cout<<"\n An equilateral triangle with a side length of "<<num;
    std::cout<<"\n\t has a perimeter of "<<num*3;
    std::cout<<"\n\t has an area of "<<(.5)(pow(num,2));

}
