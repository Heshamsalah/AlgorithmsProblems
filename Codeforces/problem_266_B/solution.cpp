#include <iostream>
#include <string>

using namespace std;

int main(){
  int n = 0, t = 0;
  int i = 0, j = 0;
  bool swapped = false;
  string q = "";

  cin >> n >> t;
  cin.ignore();
  getline(cin, q);

  for(i = 0; i < t; i++){
    swapped = false;
    for(j = 0; j < n-1; j++){
      if(swapped == true){
        swapped = false;
        continue;
      }
      if(q[j] == 'B' && q[j+1] == 'G'){
        q[j] = 'G';
        q[j+1] = 'B';
        swapped = true;
      }
    }
  }

  cout << q << endl;
  return 0;
}
