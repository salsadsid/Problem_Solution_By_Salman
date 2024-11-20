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

    int l=0,r=0,count=0;
    long long sum=0;
    while(r<n)
    {
        sum+=vt[r];

        if(sum <= k)
        {
            count=max(count,r-l+1);
        }
        else
        {
            sum-=vt[l];
            l++;
        }
        r++;
    }
    cout<<count<<endl;
    return 0;
}