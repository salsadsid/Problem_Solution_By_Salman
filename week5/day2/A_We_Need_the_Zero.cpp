#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int XOR=0;
        for(int i=0;i<n;i++)
        {
            XOR=XOR^arr[i];
        }
        
        int ans=XOR;
        for(int i=0;i<n;i++)
        {
            int curr=XOR^arr[i];
            // cout<<curr<<" ";
            ans^=curr;
            // cout<<ans<<" "<<":";
        }
        cout<<((ans^XOR) == 0 ? XOR : -1)<<endl;
    }
    return 0;
}