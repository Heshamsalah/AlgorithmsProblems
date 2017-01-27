#include <iostream>
#include <string>

using namespace std;

int main(){
  int n = 0;
  int a = 0, b = 0;
  string cmd = "";

  cin >> n;
  cin.ignore();

  while(getline(cin, cmd) != "quit"){
    cout << cmd << endl;
  }
  return 0;
}
