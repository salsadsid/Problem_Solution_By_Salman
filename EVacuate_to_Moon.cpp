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
        ll n,m,q;
        cin>>n>>m>>q;

        ll maxCarsChargePossible= min(n,m);

        vector<ll>carsPowerAr(n);
        vector<ll>powerOutletCapAr(m);

        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            carsPowerAr[i]=x;
        }

        
        for(ll i=0;i<m;i++)
        {
            ll x;
            cin>>x;
            powerOutletCapAr[i]=x;
        }
        sort(carsPowerAr.begin(),carsPowerAr.end(),greater<int>());
        sort(powerOutletCapAr.begin(),powerOutletCapAr.end(),greater<int>());
        ll sum=0;

        for(ll i=0;i<maxCarsChargePossible;i++)
        {
            ll canCharged= carsPowerAr[i];
            ll canProduced=powerOutletCapAr[i]*q;
            
            sum+=min(canCharged,canProduced);
        }

        cout<<sum<<endl;
    }

    return 0;
}