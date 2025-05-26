#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


   int n, count=0;
   cin>>n;

   vector<pair<int, int>> v(n);
   
   for(int i=0;i <n; i++){
    cin>>v[i].first>>v[i].second;
   }
   sort(v.begin(), v.end(), [](const pair<int, int>&a, const pair<int ,int>&b){
    return a.second<b.second;
   });

   int pre = 0; 
   for(int i=0; i <n; i++){
    
      if(v[i].first>=pre){
        
        count++;
        
        pre = v[i].second;
      }
   }
   cout<<count<<endl;
    return 0;
}
