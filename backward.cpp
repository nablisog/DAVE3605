#include <iostream>
#include <vector>
using namespace std;

int reverse(){
  int array[5] = {1,2,3,4,5};
  int *a = array;
  for (int i = 4; i >= 0; --i) {
    cout << array[i] << '\n';
  }
 return 0;
}
int main(void){
  cout << "Using Array" << '\n';
  int r = reverse();

  cout << "Using Vector" << '\n';
  vector<int> v = {1,2,3,4,5};
  for (int i = v.size(); i >= v.front(); --i) {
      cout << i << '\n';
    }
    
 return 0;
}
