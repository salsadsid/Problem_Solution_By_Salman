#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n,x;
        cin >> n>>x;

        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            v[i]=a*v[i];
        }

        sort(v.begin(), v.end(), greater<ll>());
        ll ans=0;
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=v[i];
        }
        if(sum<x){
            cout<<-1<<endl;
            continue;
        }
        sum=0;
        for(ll i=0;i<n;i++){
            sum+=v[i];
            ans++;
            if(sum>=x){
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}