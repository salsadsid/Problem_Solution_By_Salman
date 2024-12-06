#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        ll cnt=0;
       
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll lowerSum=0;
        ll upperSum=0;
        for(ll i=0;i<n;i++)
        {
            double x= arr[i]/double(k);
            // cout<<ceil(x)<<endl;
            // cout<<floor(x)<<endl;
            ll lowerN= floor(x);
            ll upperN= ceil(x);
           
            lowerSum+=lowerN;
           
            upperSum+=upperN;

            if( lowerN!=upperN) cnt++;
        } 
        // cout<<lowerSum<<endl;
        // cout<<upperSum<<endl;
        // cout<<cnt<<endl;

        // for(ll i=0;i<n;i++)
        // {
        //     cout<<lowerArr[i]<<" ";
        // }
        if( lowerSum <=0 && upperSum>=0&&(upperSum-lowerSum)<= cnt)
            {
           cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        // if(cnt==0)
        // {
        //     if(lowerSum==0)
        //     {
        //         cout<<"YES"<<endl;
        //     }
        //     else
        //     {
        //         cout<<"NO"<<endl;
        //     }
        //     continue;
        // }
        // if(lowerSum==0 || upperSum ==0)
        // {
        //     cout<<"YES"<<endl;
        //     // cout<<"das"<<endl;
        //     continue;
        // } 
        // if(upperSum<0)
        // {
        //     cout<<"NO"<<endl;
        //     continue;
        // }
        // if((upperSum - lowerSum) <0 )
        // {
        //     cout<<"NO"<<endl;
        //     // cout<<"das"<<endl;
        //      continue;
        // }
        // if((upperSum - lowerSum) >cnt )
        // {
        //     cout<<"NO"<<endl;
        // }
        // else
        // {
        //     cout<<"YES"<<endl;
        // }
    }
    return 0;
}