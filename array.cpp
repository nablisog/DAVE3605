#include <iostream>
using namespace std;

int main(void) {
  int array[5];
  int *a;
  for(int i = 0; i < 5; i++){
    cout << "Input nr " << i +1 << " " ;
    cin >> array[i];
  }
  a = array;
  for (int i = 0; i < 5; i++) {
    cout << "At index " << i << " " << array[i] << '\n';
  }
  
  return 0;
}
