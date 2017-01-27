#include <cstdio>
#include <algorithm>

using namespace std;

int getNumberOfCycles(int k){
  int numOfCycles = 1;
  unsigned int n = k;
  while (n != 1) {
    if(n % 2 == 1){
      n = (n * 3) + 1;
    }
    else{
      n >>= 1;
    }
    numOfCycles++;
  }
  return numOfCycles;
}

int main(){
  int num1 = 0, num2 = 0;
  int i = 0;
  int max = 0;
  int cur = 0;
  int cycle_length = 0;
  while (scanf ("%d %d", &num1, &num2) != EOF) {
    int temp_num1 = num1;
    int temp_num2 = num2;
    if(num1 > num2){
      swap(num1, num2);
    }
    while(num1 < num2){
      unsigned int n = num1;
      while ( n != 1 ) {
          if ( n % 2 == 1 ) n = 3 * n + 1;
          else n /= 2;
          cycle_length++;
      }
      if(cycle_length > max){
        max = cycle_length;
      }
      num1++;
    }
    printf ("%d %d %d\n", temp_num1, temp_num2, max);
  }
  return 0;
}
