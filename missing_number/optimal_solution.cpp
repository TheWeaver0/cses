#include <bits/stdc++.h>
using namespace std;


int main(){


  int s, x;
  long long total, sum=0;
  cin>>s;
  total = 1LL *s*(s+1)/2;
  for(int i=0 ; i<s-1; i++){
    cin>>x;
    sum += x;
  } 
  cout<<total-sum<<endl;

     return 0;
}