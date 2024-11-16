#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    vector<string> arrSt(n);
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;

        arrSt[i]=a;
        if(!mp[a])
        {
            mp[a]++;
        }
    }

    string ans="";
    for(int i=n-1;i>=0;i--)
    {   
        if(mp[arrSt[i]]==1)
        {
            mp[arrSt[i]]=0;
            int lStr= arrSt[i].size();
            string f= arrSt[i].substr(lStr-2,2);
            ans+=f;
        }
    }
    cout<<ans<<endl;

    return 0;
}