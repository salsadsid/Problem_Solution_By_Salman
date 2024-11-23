#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n,k;
    cin>>n>>k;

    vector<int>vt(n);

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vt[i]=x;
    }

    int l=0,r=0;
    long long sum=0,ans=0;

    while(r<n)
    {
        sum+=vt[r];
        
        while(sum>=k)
        {
            ans+=(n-r);
            sum-=vt[l];
            l++;
        }

        r++;
    }

    cout<<ans<<endl;
    return 0;
}