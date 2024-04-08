#include <iostream>

int main() {
  int year;
  std::cout<<"Enter the year: ";
  std::cin>>year;
  if (year % 4 != 0 or(year%100==0 and year%400!=0)){
    std::cout<<"Not leap year";
  }else{
    std::cout<<"Leap year";
  }
  
  
}