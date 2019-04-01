#include <iostream>
using namespace std;

int fibinacci(int input){

  if (input < 2) {
    return input;
  }
  else{

    return fibinacci(input - 1) + fibinacci(input - 2);
  }
  return 0;
}

int main(void) {

  int input;
  cout << " Enter number of Fibonacci series you want to see ";
  cin >> input;
  for (int i = 1; i < input; i++)
    cout << fibinacci(i) << '\n';
  return 0;
}
