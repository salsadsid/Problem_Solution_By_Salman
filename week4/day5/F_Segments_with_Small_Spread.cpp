#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n,k;
    cin>>n>>k;
    vector<long long>vec(n);

    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        vec[i]=x;
    }

    multiset<long long> ms;

    int l=0,r=0;
    long long ans=0;


    while(r<n)
    {
        ms.insert(vec[r]);
        long long  mn=*ms.begin();
        long long mx=*ms.rbegin();
        if(mx-mn <=k)
        {
            ans+=(r-l+1);
        }
        else
        {
            while(l<=r)
            {
                mn=*ms.begin();
                mx=*ms.rbegin();
                if(mx-mn <=k) break;
                ms.erase(ms.find(vec[l]));
                l++;
                
            }
            mn=*ms.begin();
            mx=*ms.rbegin();
            if(mx-mn <=k) 
            {
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}