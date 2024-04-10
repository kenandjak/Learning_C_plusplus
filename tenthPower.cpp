#include <bits/stdc++.h>
using namespace std;

int tenth_power(int num){
  return pow(num, 10);
}

int main() {
  
  cout << tenth_power(0) << "\n";
  cout << tenth_power(1) << "\n";
  cout << tenth_power(2) << "\n";
  
}

//g++ -std=gnu++17 -O2 -static -o executavel tenthPower.cpp
//./executavel