#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  int array[5];
  int *a;
  cout << "Enter 5 number" << '\n';
  for (int i = 0; i < 5; i++) {
    cin >> array[i];
  }
  a = array;
  int max = array[0];
  for (int j = 0; j < 5; j++) {
    if (array[j] > max) {
       max = array[j];
    }
  }
  cout << "the maximum number from the input = " << max << '\n';
  
  return 0;
}
