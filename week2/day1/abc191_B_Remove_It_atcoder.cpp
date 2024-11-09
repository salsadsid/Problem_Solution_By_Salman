//============================================================================
// Problem     : https://atcoder.jp/contests/abc191/tasks/abc191_b
// Name        : abc191_B_Remove_It_atcoder.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================


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