#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>dq;
        map<ll,ll>mp;

        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            dq.push_back(x);
        }

        ll uniqueCnt=0;
       
        for(ll i=n-1;i>=0;i--)
        {
            if(mp[dq[i]]==0)
            {
                uniqueCnt++;
            }
            else
            {
                break;
            }
            mp[dq[i]]++;
        }

        cout<<n-uniqueCnt<<endl;
    }

    return 0;
}