#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int x, n;
    set<int> s;
    cin>>n;
    for(auto i=0; i<n; i++){
        cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<endl;

}
