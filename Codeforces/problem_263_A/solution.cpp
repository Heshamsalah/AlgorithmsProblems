#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
  int input;
  int i = 0, j = 0, rows_move = 0, cols_move = 0, m = 0, n = 0;
  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
      cin >> input;
      if(input == 1){
        m = i;
        n = j;
        break;
      }
    }
  }
  // cout << endl << m << " " << n << endl;
  rows_move = abs((m+1) - 3);
  cols_move = abs((n+1) - 3);

  cout << rows_move + cols_move << endl;
  return 0;
}
