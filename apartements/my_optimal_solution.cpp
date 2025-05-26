#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nda, na, x, diff, idx = 0; 
    vector<int> dap, app;

    cin >> nda >> na >> diff;

    for (int i = 0; i < nda; i++) {
        cin >> x;
        dap.push_back(x);
    }

    for (int i = 0; i < na; i++) {  // fix this loop
        cin >> x;
        app.push_back(x);
    }

    sort(dap.begin(), dap.end());
    sort(app.begin(), app.end());

    int i = 0, j = 0;

    while (i < na && j < nda) {
        if (app[i] >= dap[j] - diff && app[i] <= dap[j] + diff) {
            idx++;
            i++;
            j++;
        } else if (app[i] < dap[j] - diff) {
            i++;
        } else {
            j++;
        }
    }

    cout << idx << '\n';

    return 0;
}
