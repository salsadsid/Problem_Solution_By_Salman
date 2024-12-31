#include <bits/stdc++.h>
using namespace std;
#define finish(x) return cout << x << endl, 0
#define ll long long

ll x;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> x;
    vector <ll> f;
    for(ll i = 2 ; i * i <= x ; i++){
        if(x % i == 0){
            ll cur = 1;
            while(x % i == 0){
                x /= i;
                cur *= i;
            }
            f.push_back(cur);
        }
    }
    if(x > 1) f.push_back(x);
    int n = f.size();
    ll ansA = 1e18, ansB = 1e18;
    for(int i = 0 ; i < (1 << n) ; i++){
        ll a = 1, b = 1;
        for(int j = 0 ; j < n ; j++){
            if((i >> j) & 1) a *= f[j];
            else b *= f[j];
        }
        if(max(a, b) < max(ansA, ansB)){
            ansA = a;
            ansB = b;
        }
    }
    cout << ansA << " " << ansB << endl;
}