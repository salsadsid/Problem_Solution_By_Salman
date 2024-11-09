//============================================================================
// Problem     : https://codeforces.com/problemset/problem/1800/C1
// Name        : 1800_C_1_Powering_the_Hero_easy_version_codeforces.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================

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
        ll m;
        cin>>m;
        vector<ll> v;
        for(ll i=0;i<m;i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        priority_queue<ll>pq;
        bool flag= false;
        ll sum=0;
        for(ll i=0;i<m;i++)
        {
            if(v[i]!=0)
            {
                flag=true;
                pq.push(v[i]);
            }
            else if(v[i]==0)
            {
                if(!pq.empty())
                {
                    ll y =pq.top();
                    pq.pop();
                    sum+=y;
                }
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}