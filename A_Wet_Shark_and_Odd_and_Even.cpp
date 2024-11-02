#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll a;
    cin>>a;
    ll sum=0;

    vector<ll>odd;
    vector<ll>even;

    for(ll i=0;i<a;i++)
    {
        ll b;
        cin>>b;

        if(b%2!=0)
        {
            // cout<<"odd"<<endl;
            odd.push_back(b);
        }
        else
        {
            // cout<<"even"<<endl;
            even.push_back(b);
        }
        
    }
    
    ll oddArlen= odd.size();
    if(oddArlen%2!=0 && odd.size()>0)
    {
        sort(odd.begin(),odd.end());
        for(ll i=1;i<odd.size();i++)
        {
            sum+=odd[i];
        }
    }
    else if(odd.size()>0)
    {
        for(ll i=0;i<odd.size();i++)
        {
            sum+=odd[i];
        }
    }

    for(ll i=0;i<even.size();i++)
    {
            sum+=even[i];
    }
    
    cout<<sum;
    return 0;
}