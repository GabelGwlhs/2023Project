#include <iostream>
#include<math.h>
#include <iomanip>

int main() {

    //make pi a const outside the main loop

    double pi = 3.15416;
    int num;

    //make varaibles for all of your values rather than doing calculations in the stream
    //example
    //int userInput, squareArea, perimeter, etc...
    //double cirumference, circleArea, etc...\
    
    std::cout << "Please enter a whole number: ";
    std::cin >> num; //assigns entered num to num
    num = static_cast<double>(num);

    std::cout << "A square with side length of " << num; //computes values for a square and prints
    std::cout << "\n\t has a perimeter of " << (4 * num);
    std::cout << "\n\t has a area of " << (pow(num, 2)) << "\n"; //use pow here
    std::cout << "A circle with a diameter of " << num; //computes values of a circle and prints
    double rad = num / 2.0;
    std::cout << "\n\thas a radius of " << std::setprecision(3) << rad;
    std::cout << "\n\thas a circumference of " << std::setprecision(3) << (2.0 * pi * rad);
    std::cout << "\n\thas an area of " << std::setprecision(3) << (pi * rad * rad);
    //An equilateral triangle with side length of 7
    //    has a perimeter of 21
    //    has an area of 21.218
    std::cout << "\nAn equilateral triangle with a side length of " << std::setprecision(3) << num; //calculates values for equilateral triangle
    std::cout << "\n\thas a perimeter of " << std::setprecision(3) << num * 3;
    std::cout << "\n\thas an area of " << std::setprecision(3) << (.5)*(pow(num, 2));

    return 1;

}
