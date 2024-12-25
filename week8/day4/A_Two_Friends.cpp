#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            p[i]--;  // Convert to 0-indexed
        }

        int ans = 3;
        for (int i = 0; i < n; ++i) {
            if (p[p[i]] == i) {
                ans = 2;
            }
        }

        cout << ans << endl;
    }
    return 0;
}