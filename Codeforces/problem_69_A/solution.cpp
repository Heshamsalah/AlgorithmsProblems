#include <iostream>

using namespace std;

int main(){
  int n = 0, i = 0, x = 0, y = 0, z = 0, sumx = 0, sumy = 0, sumz = 0;
  cin >> n;
  for(i = 0; i < n; i++){
    cin >> x >> y >> z;
    sumx += x;
    sumy += y;
    sumz += z;
  }
  if(sumx == 0 && sumy == 0 && sumz == 0){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }

  return 0;
}
