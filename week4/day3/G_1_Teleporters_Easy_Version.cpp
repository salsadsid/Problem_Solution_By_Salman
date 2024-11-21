#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        multiset<pair<int,int>> ms;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr[i]=x;
            ms.insert({x+i+1,x});
        }
        sort(arr,arr+n);
        int ans=0;
        for(auto it:ms)
        {
            if(k-it.first>=0)
            {
                k-=it.first;
                ans++;
            }
            else
            {
                break;
            }

        }
        cout<<ans<<endl;
    }   
    return 0;
}