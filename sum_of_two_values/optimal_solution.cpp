#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
 
 
  int n, max, x;
  map<int, int> mapo;
  cin>>n>>max;
  for(int i=0; i<n; i++){
    cin>>x;
    if(mapo.count(max-x)){
      cout<<i+1<<" "<<mapo[max-x]<<endl;
      return 0;
    }else 
      mapo[x] = i+1;
  }

  cout<<"IMPOSSIBLE";
  
     return 0;
}
