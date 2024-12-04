#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);

        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll s = -1;
        vector<ll> v;

        for (ll x : a) {
            if (x % 2 == 0) {
                v.push_back(x);
            } else if (x > s) {
                s = x;
            }
        }

        sort(v.begin(), v.end());

        if (s == -1 || v.empty()) {
            cout << 0 << endl;
            continue;
        }

        ll ans = v.size();
        for (ll t : v) {
            if (t < s) {
                s += t;
            } else {
                ans++;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
