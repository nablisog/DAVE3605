#include <iostream>
using namespace std;
//This function swap values
int swap_1(int a, int b){
  int c = a; //saving the value at a
  a = b; //putting b into a
  b = c; // putting a into b
  cout << " Displaying before the end of function of swap_1(): " << a << " "<< b << '\n';

  return 0;
}
// This function swap two values and addresses it
int swap_2(int& a, int& b){
  int c = a; //saving the value at address a
  a = b; //putting b into a
  b = c; // putting a into b
  cout << " Displaying before the end of function of swap_2(): " << a << " "<<  b << '\n';
  return 0;
}

int main() {
  //local variable
  int a = 1;
  int b = 2;
  cout << " Before swapping a = " << a << '\n';
  cout << " Before swapping b = " << b <<'\n';
  cout << " " << '\n';

  swap_1(a,b);
  cout << " after swapping a = " << a << '\n';
  cout << " after swapping b = " << b <<'\n';
  cout << " " << '\n';

  swap_2(a,b);
  cout << " after address swapping a = " << a << '\n';
  cout << " after address swapping b = " << b <<'\n';
  return 0;
}
