#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    ll n;
    cin >> n;
    

    vector<ll> a(n + 1, 0);
    

    for (ll i = 1; i <= n; ++i) {
        ll x;
        cin >> x;
        a[i] = a[i - 1] + x;
    }
    
    string s;
    cin >> s;
    
    ll ans = 0;
    ll l = 0;
    ll r = n - 1;
    
    // for(int i=0;i<a.size();i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // Two pointer approach
    while (r > l) {
        while (l < n && s[l] == 'R') {
            l++;
        }
        while (r >= 0 && s[r] == 'L') {
            r--;
        }
    
        if (l < r) {
            // cout<<a[r + 1]<<" "<<a[l]<<endl;
            ans += a[r + 1] - a[l];
            l++;
            r--;
        }
    }
    
    cout << ans << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
