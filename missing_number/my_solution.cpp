#include <bits/stdc++.h>
using namespace std;


int main(){


  int s, x, r = 0;
  vector<int> v;
  cin>>s;
  for(int i =0 ; i<s-1; i++){
    cin>>x;
    v.push_back(x);
  }
  if(s == 2){
    if(v[0] == 1){
      cout<<2<<endl;
      return 0;
    }
    else{
      cout<<1<<endl;
      return 0;
    }
  }
  
  sort(v.begin(), v.end());
  
  for(int i=0; i<s-2; i++){
    if(v[i+1]-v[i]>1){
      r = v[i+1]-1;
      break;
    }
  }
  if (r == 0)
    cout<<s<<endl;
  else
    cout<<r<<endl;

     return 0;
}