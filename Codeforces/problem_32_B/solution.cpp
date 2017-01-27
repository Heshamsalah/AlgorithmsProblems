#include <iostream>
#include <string>

using namespace std;

int main(){
  int i = 0;
  bool f = false;
  string target = "";
  string zero = ".";
  string one = "-.";
  string two = "--";

  getline(cin, target);

  int len = target.length();

  for(i = 0; i < len; i++){
    if(f){
      f = false;
      continue;
    }
    if(target[i] == '.'){
      cout << "0";
    }
    else if(target[i] == '-' && target[i+1] == '.'){
      cout << "1";
      f = true;
    }
    else if(target[i] == '-' && target[i+1] == '-'){
      cout << "2";
      f = true;
    }
  }

  return 0;
}
