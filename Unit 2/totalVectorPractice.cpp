#include <iostream>
#include <vector>
int main(){
  std::vector<int> num = {2,4,3,6,1,9};
  int sumE=0;
  int sumO=0;
  for(int i=0;i<num.size();i++){
    if(num[i]%2==0){
      sumE=sumE+num[i];
    }
    else{
      sumO=sumO+num[i];
    }
  }
  std::cout<<"Sum of even numbers is "<<sumE<<"\n";
  std::cout<<"Product of odd numbers is "<<sumO;
}
