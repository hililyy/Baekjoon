#include <iostream>
using namespace std;
int n, answer, box[1001], dp[1001];

int main() {
  
  cin >> n;
  for(int i = 0; i < n; i++) cin >> box[i];
  
  for(int i = 0; i < n; i++) {
    dp[i] = 1;
    
    for(int j = i - 1; j >= 0; j--) {
      if(box[i] <= box[j]) continue;
      
      dp[i] = max(dp[i], dp[j] + 1);
    }
    answer = max(answer, dp[i]);
  }
  
  cout << answer;
  
  return 0;
}