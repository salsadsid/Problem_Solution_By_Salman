#include <bits/stdc++.h>
using namespace std;


int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        int n;
        cin>>n;
        string chefG,chefinaG;
        cin>>chefG>>chefinaG;
        int chefP=0,chefinaP=0;
        map <char,char>mp;
        mp['R']='S';
        mp['S']='P';
        mp['P']='R';
        for(int i=0;i<n;i++)
        {
            if(mp[chefG[i]]==chefinaG[i])
            {
                chefP++;
            }
            else if (chefG[i]==chefinaG[i])
            {
                continue;
            }
            else
            {
                chefinaP++;
            }
        }
        if(chefP>chefinaP)
        {
            cout<<0<<endl;
        }
        else if(chefP==chefinaP)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<chefinaP-chefP<<endl;
        }
    }
    return 0;
}