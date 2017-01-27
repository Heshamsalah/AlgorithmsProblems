#include <iostream>

using namespace std;

int main(){
  int t = 0, i = 0;
  int num1 = 0, num2= 0;

  cin >> t;
  for(i = 1; i <= t; i++){
    cin >> num1 >> num2;
    cout << num1 + num2 << endl;
  }
  return 0;
}
