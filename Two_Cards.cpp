#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>cardA(n);
        vector<ll>cardB(n);
        ll cardAHighest=INT_MIN;
        ll cardAHighestIdx=INT_MIN;
       

        ll cardBHighest=INT_MIN;
        ll cardBHighestIdx=INT_MIN;

        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            cardA[i]=x;
            if(cardA[i]>cardAHighest)
            {
                cardAHighest=x;
                cardAHighestIdx=i;
            }
        }

       



        for(ll i=0;i<n;i++)
        {
            int x;
            cin>>x;
            cardB[i]=x;
            if(cardB[i]>cardBHighest)
            {
                cardBHighest=x;
                cardBHighestIdx=i;
            }
        }

        if(cardAHighestIdx==cardBHighestIdx)
        {
            cout<<"A"<<endl;
            ll cardASecondHighest=INT_MIN;
            ll cardASecondHighestIdx=INT_MIN;
            for(ll i=0;i<n;i++)
            {
                if(cardA[i]>cardASecondHighest && i!=cardAHighestIdx)
                {
                    cardASecondHighest=cardA[i];
                    cardASecondHighestIdx=i;
                }
            }

            // cout<<cardASecondHighestIdx<<endl;
            // cout<<cardAHighestIdx<<endl;

            ll max1=max(cardA[cardBHighestIdx],cardB[cardBHighestIdx]);

            ll max2=max(cardA[cardASecondHighestIdx],cardB[cardASecondHighestIdx] );


            if(max1>max2)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            ll max1=max(cardA[cardBHighestIdx],cardB[cardBHighestIdx] );

            ll max2=max(cardA[cardAHighestIdx],cardB[cardAHighestIdx]);

            if(max1>max2)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        
    }
    return 0;
}