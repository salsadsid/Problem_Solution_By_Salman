#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n,k;
    cin>>n>>k;

    vector<long long> vt(n);

    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        vt[i]=x;
    }

    long long l=0,r=0,minLength=INT_MAX;
    long long sum=0;
    while(r<n)
    {
        sum+=vt[r];
        while(sum >= k)
        {
            minLength=min(minLength,r-l+1);
            sum-=vt[l];
            l++;
        }
        r++;
    }

    if(minLength==INT_MAX)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<minLength<<endl;
    }

    return 0;
}