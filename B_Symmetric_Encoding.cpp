#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        int a;
        cin>>a;
        string s;

        cin >> s;
        map<char, char> mp;
        vector<pair<char,char>>vc;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]] = '0';
        }
        
        for(auto it:mp)
        {
            vc.push_back({it.first,'0'});
        }
        
        for(int i=0,j=vc.size()-1;i<vc.size();i++,j--)
        {   
            vc[i].second=vc[j].first;
            vc[j].second=vc[i].first;
        }
        int i=0;
        for(auto it:mp)
        {
            mp[it.first]=vc[i].second;
            i++;
        }

        vector<char> last;
        for (int i = 0; i < s.size(); i++)
        {
                last.push_back(mp[s[i]]);
        }

        for(char a:last)
        {
            cout<<a;
        }
    }
    return 0;
}