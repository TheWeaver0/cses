#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, m , k, x, idx=0;
    cin>>n>>m>>k;

    vector<int> v1, v2;
    
    for(auto i=0; i<n; i++){
        cin>>x;
        v1.push_back(x);
    }
    for(auto i=0; i<m; i++){
        cin>>x;
        v2.push_back(x);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
        
    auto i = 0, j=0;
    while(i<n && j<m){
        if(abs(v1[i]-v2[j])<=k){
            i++;
            j++;
            idx++;
        }else if(v1[i] - v2[j]+k  > 0){
            j++;
        }else{
            i++;
        }
    }
    cout<<idx<<endl;




    return 0;
}
