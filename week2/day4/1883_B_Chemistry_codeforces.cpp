//============================================================================
// Problem     : https://codeforces.com/problemset/problem/1883/B
// Name        : 1883_B_Chemistry_codeforces.cpp
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
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int testCase;
    cin>>testCase;
    while (testCase--)
    {
        int a,b;
        string s;
        cin>>a>>b>>s;
        int remains=a-b;
        map<char,int>mp;

        for(int i=0;i<a;i++)
        {
            mp[s[i]]++;
        }

        int odds=0;

        for(auto it:mp)
        {
            if(it.second %2 !=0)
            {
                odds++;
            }
        }

        if(b>=a)
        {
            cout<<"NO"<<endl;
        }
        else if(b >= odds-1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}