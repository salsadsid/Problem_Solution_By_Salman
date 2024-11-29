#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n-1];
        for (ll i = 0; i < n-1; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n-1);
        ll arr2[n];
        ll medium=0;
        ll needed=0;
        for (ll i = 0; i < n-1; i++)
        {
            if(i==0){
                medium=arr[i]/2;
                arr2[i]=medium;
                arr2[i+1]=arr[i]-medium;
            }
            else
            {
                needed=arr[i]-arr2[i];
                arr2[i+1]=needed;
            }
                
        }

        for(ll i=0;i<n;i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}