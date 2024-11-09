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
        ll a;
        cin>>a;
        vector<ll>numbers;
        map<ll,ll>freq;
        for (ll i=1;i<=a;i++)
        {
            ll x;
            cin>>x;
            freq[x]++;
            if(freq[x]==1)
            {
                numbers.push_back(x);
            }
        }

        sort(numbers.begin(),numbers.end());
        int count=0;

        for(ll i=0;i<numbers.size();i++)
        {
            if(freq[numbers[i]+1]<freq[numbers[i]])
            {
                count+=freq[numbers[i]]-freq[numbers[i]+1];
            }
        }

        cout<<count<<endl;
        
    }

    return 0;
}