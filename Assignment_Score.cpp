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
             sum+=arr[i];
        }
        int totalMarks=(n+1)*100;

        int marksNeeded=(totalMarks*50)/100;

        if(sum>=marksNeeded)
        {
            cout<<0<<endl;
        }
        else
        {
            int ans=marksNeeded-sum;

            if(ans>100)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<ans<<endl;
            }
        }
        
    }
    return 0;
}