#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    
    int correct_pos = 1;
    for (int i = 0; i < n; ++i) {
        if (p[i] == correct_pos) {
            ++correct_pos;
        }
    }
    
    int remaining = n - correct_pos + 1;
    cout << (remaining + k - 1) / k << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
