#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
 
  ios::sync_with_stdio(false);
  cin.tie(nullptr);


  int n;
  long long current_sum=0, maximum_sum = LONG_MIN, x;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>x;
    current_sum = max(x, x+current_sum);
    maximum_sum = max(current_sum, maximum_sum);

  }
  cout<<maximum_sum;
  
     return 0;
}
