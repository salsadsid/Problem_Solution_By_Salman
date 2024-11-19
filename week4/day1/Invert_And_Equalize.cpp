#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;


    while(t--)
    {
        ll a;
        cin>>a;
        string s;
        cin>>s;
        ll oneSegment=0;
        ll zeroSegment=0;
        bool isPreviousCharacterOne=false;
        bool isPreviousCharacterZero=false;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                if(!isPreviousCharacterOne)
                {
                    oneSegment++;
                }
                isPreviousCharacterOne=true;
                isPreviousCharacterZero=false;
            }
            else
            {
                if(!isPreviousCharacterZero)
                {
                    zeroSegment++;
                }
                isPreviousCharacterZero=true;
                isPreviousCharacterOne=false;
            }
        }

       cout<<min(oneSegment,zeroSegment)<<endl;
    } 

    return 0;
}