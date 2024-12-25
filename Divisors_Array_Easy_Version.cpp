#include <bits/stdc++.h>
using namespace std;

long long fact(long long n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int divisors(long long n)
{
    int count=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                count++;
            }
            else
            {
                count+=2;
            }
        }
    }
    return count;
}


int main()
{
    int n,m;
    cin>>n>>m;

    vector<int> v(n);
    vector<long long> v2(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    long long factS= fact(n);

    for(int i=0;i<n;i++)
    {
        v2[i]=(factS*v[i])%3;
    }

    for(int i=0;i<n;i++)
    {
        cout<<v2[i]<<" ";
    }

    // for(int i=0;i<n;i++)
    // {
    //     int ans=divisors(v2[i]);
    //     cout<<ans<<" ";
    // }

    return 0;
}