#include <bits/stdc++.h>
using namespace std;

int main() {
    
   

    int n, x, t, idx = 0;
    vector<int> v;
    cin>>n>>x;
    for(auto i=0; i<n; i++){
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    auto j = 0, k = n-1;
    while(j <= k){
        if(v[j] + v[k] <= x){
            j++;
            k--;
            idx++;
        }else{
            k--;
            idx++;
        }
    }
    cout<<idx<<endl;


    return 0;
}
