#include <bits/stdc++.h>
using namespace std;


int main(){


  int n, x, ex = 0;
  long long idx=0;
  cin>>n;
  for(int i=0;  i<n; i++){
    cin>>x;
    if(x<ex){
      idx += 1LL * (ex-x);
    }else{
      ex = x;
    }
  }
  cout<<idx<<endl;
  
     return 0;
}