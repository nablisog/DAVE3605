#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int s = 0;
  vector<int> v (15);
  for(int i = 0; i < v.size(); i++){
    s += 3;
  cout << s << '\n';
}
  
  return 0;
}
