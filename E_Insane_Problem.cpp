#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll k,l1,l2,r1,r2;
        cin >> k >> l1 >> r1 >>l2 >> r2;
        
        vector<pair<ll,ll>> v;

        for(ll i=l1;i<=r1;i++)
        {
            // cout<<i<<" "<<i*k<<endl;
            if((i*k)>=l2 && (i*k)<=r2)
            {
                v.push_back({i,i*k});
            }
        }
        
        for(auto it:v)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
    return 0;
}