#include <iostream>
#include <cmath>
using namespace std;

int calculate(int i){
  return pow(i,i);
}

int main(void) {

  int input;
  cout << "Enter number: " ;
  cin >> input;
  int answer = calculate(input);
  cout << input << " Power of is = " << answer << '\n';
  
  return 0;
}
