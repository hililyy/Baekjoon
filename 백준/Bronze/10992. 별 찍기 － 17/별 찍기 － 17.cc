#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  for(int i = 1; i <= n; i++) {
    for(int j = n - i; j > 0; j--) cout << ' ';
    
    for(int k = 1; k < i * 2; k++){
      if(i == n) {
        cout << "*";
        continue;
      }
      if(k == 1 || k == i * 2 - 1) cout << '*';
      else cout << ' ';
    }
    cout << '\n';
  }
  
  return 0;
}