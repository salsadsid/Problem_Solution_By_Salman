#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,XOR=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            XOR=XOR^arr[i];
        }
        int ans=XOR;
        for(int i=0;i<n;i++)
        {
            int curr=XOR^arr[i];
            ans=min(ans,curr);
        }
        cout<<ans<<endl;
    }
    return 0;
}