#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
 
 
  int n, j=0;
 
  cin>>n;


  if(n == 1){
    cout<<"1";
  }else if(n<4){
    cout<<"NO SOLUTION";
  }else{ 
    
    if(n%2 == 0 )
      cout<<n/2<<" ";
    else
      cout<<n/2+1<<" ";
    for(int i=0; i <n-1; i++){
      if(i%2 == 0)
        cout<<n-j<<" ";
      else{
        cout<<1+j<<" ";
      j++;
      }
    }
}
  cout<<endl;
  
     return 0;
}
