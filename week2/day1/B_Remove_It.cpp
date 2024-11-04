#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll a,b;
    cin>>a>>b;
    ll ar[a];

    for(ll i=0;i<a;i++)
    {
        ll n;
        cin>>n;
        ar[i]=n;
    }

    for(ll i=0;i<a;i++)
    {
        if(ar[i]!=b)
        {
            cout<<ar[i]<<" ";
        }
    }
    return 0;
}