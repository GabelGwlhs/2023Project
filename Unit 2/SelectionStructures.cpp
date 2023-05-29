#include <iostream>

using namespace std;


int main() {
    int num;
    std::cout << "Enter your favorite integer: ";
    std::cin >> num;
    
    if (num >= 0) {//checks if positive of negative
        std::cout <<"\t"<<num << " is a positive number \n";
    } else {
        std::cout << "\t" << num << " is a negative number \n";
    }


    if (num > 1000) {//checks if it is greater thana ny of these
        std::cout << "\tit is greater than 1000,\n";
    } else if (num > 100) {
        std::cout << "\tit is greater than 100,\n";
    } else if (num > 10) {
        std::cout << "\tit is greater than 10,\n";
        
    }
    if(num%2==0){//checks if num is even
        std::cout<<"\tit is even,\n";
    }
    else{
        std::cout<<"\tit is odd,\n";
    }
    
    switch (num){//switch statement for determining if num is atomic num of noble gas
        case 2:
        std::cout<<"\tand it is the atomic number of Helium.\n";
        break;
        
        case 10:
            std::cout<<"\tand it is the atomic number of neon.\n";
            break;
        
        case 18:
            std::cout<<"\tand it is the atomic number of Argon.\n";
            break;
        
        case 36:
            std::cout<<"\tand it is the atomic number of Krypton.\n";
            break;

        
        case 54:
            std::cout<<"\tand it is the atomic number of Xenon. \n";
            break;
        
        case 86:
            std::cout<<"\tand it is the atomic number of Radon.\n";
            break;
        default:
            std::cout<<"\tand it is not the atomic number of a noble gas.";
        
    }
}

