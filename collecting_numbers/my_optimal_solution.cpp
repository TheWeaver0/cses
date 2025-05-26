#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   

    unordered_map<int, int> mapo;

    int n, x, idx=1;

    cin>>n;
    for(int i=0;i <n; i++){
      cin>>x;
      mapo[x] = i;
    }

    for(int i=1;i <n; i++){
      if(mapo[i]>mapo[i+1])
        idx++;
    }

    cout<<idx<<endl;

 

}
