#include <iostream>
#include<math.h>
#include <iomanip>
#include <ios>
const double pi = 3.15416;
int main() {


    int num;
    std::cout<<"Please enter a whole number: ";
    std::cin>>num;//assigns entered num to num
    num= static_cast<double>(num);

    std::cout<<"A square with side length of "<<num;//computes values for a square and prints
    int permi = num*4;
    std::cout<<"\n\t has a perimeter of "<<permi;
    int areas = pow(num,2);
    std::cout<<"\n\t has a area of "<<areas<<"\n"; //use pow here
    std::cout<<"A circle with a diameter of "<<num;//computes values of a circle and prints
    double rad = num/2.0;
    std::cout<<"\n\thas a radius of "<<std::setprecision(3) << std::fixed<<rad;
    double circ =(2.0*pi*rad);
    std::cout<<"\n\thas a circumference of "<<std::setprecision(3)<<std::fixed<<circ;
    double area =(pow(rad,2))*pi;
    std::cout<<"\n\thas an area of "<<std::setprecision(3)<<std::fixed<<area;
    //An equilateral triangle with side length of 7
    //    has a perimeter of 215
    //    has an area of 21.218
    std::cout<<"\nAn equilateral triangle with a side length of "<<std::setprecision(3)<<std::fixed<<num;//calculates values for equilateral triangle
    double per = num*3;
    std::cout<<"\n\thas a perimeter of "<<std::setprecision(3)<<std::fixed<<per;
    double are=(.5)*(pow(num,2));
    std::cout<<"\n\thas an area of "<<std::setprecision(3)<<std::fixed<<are;
    return 1;
}

