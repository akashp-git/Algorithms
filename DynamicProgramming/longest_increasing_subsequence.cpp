#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  vector<int> arr(n);

  for(int i=0;i<n;++i) cin>>arr[i];

  vector<int> dp(n+1, 1);

  for(int i=1;i<n;++i) {
    for(int j=0;j<i;++j) if(arr[i] > arr[j]) dp[i] = max(dp[i], dp[j] + 1);
  }

  cout<<dp[n-1]<<endl;
  return 0;
}
