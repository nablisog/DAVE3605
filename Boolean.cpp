#include <iostream>
using namespace std;

bool is_number(int x){

  if(x%2 != 0){
    return false;
  }
  return true;
}


int main(void) {
  int input;
  cout << "Enter a number" << '\n';
  // cin :- standard input
  cin >> input;
  int answer  = is_number(input);
  cout << answer << '\n';
  return 0;

}
