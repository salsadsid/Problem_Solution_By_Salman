#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll testCase;
    cin>>testCase;

    while(testCase--)
    {
        ll x,y;
        cin>>x>>y;
        multiset<ll> st;

        ll candidateA[x];
        ll candidateB[x];

        for (ll i=0;i<x;i++)
        {
            ll a;
            cin>>a;
            candidateA[i]=a;
        }
    
        for(ll i=0;i<x;i++)
        {
            ll a;
            cin>>a;
            candidateB[i]=a;
        }

        ll candidateAwinsState=0;
        ll candidateBwinsState=0;
        ll equalState=0;

        for (ll i=0;i<x;i++)
        {
            if(candidateA[i]>candidateB[i])
            {
                candidateAwinsState++;
            }
            else
            {
                candidateBwinsState++;
                ll f=candidateB[i]-candidateA[i];
                st.insert(f+1);
            }
           
        }
        
        auto it=st.begin();

        while(it!=st.end())
        {
                // cout<<castVoteCount<<" "<<*it<<endl;
            if(y>=*it)
            {
                y=y-*it;
                candidateAwinsState++;
            }
            it++;
        }
        if(candidateAwinsState>x/2)
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