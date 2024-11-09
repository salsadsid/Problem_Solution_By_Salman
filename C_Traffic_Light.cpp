#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        s+=s;
        vector<int>freq;
        int maxC=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            
            // cout<<s[i]<<endl;
            if(s[i]==c)
            {
               count=0;
               while(s[i]!='g'&& i<s.size()) 
               {
                count++;
                i++;
               }
               maxC=max(maxC,count);
            }
        }

        cout<<maxC<<endl;
    }

    return 0;
}