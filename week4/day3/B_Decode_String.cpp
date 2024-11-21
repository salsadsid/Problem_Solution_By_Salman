#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a;
        cin>>a;
        string s;
        cin>>s;
        vector<string>v;
        for (int i=0;i<a;i++)
        {
            if(i+2 <a && s[i+2]=='0')
            {
                if(i+3 <a && s[i+3]=='0')
                {
                    v.push_back(string(1,s[i]));
                    v.push_back(string(1,s[i+1])+s[i+2]);
                    i=i+3;
                }
                else
                {
                    auto b= string(1,s[i])+s[i+1];
                    v.push_back(b);
                    i=i+2;
                }

            }
            else
            {
                v.push_back(string(1,s[i]));
            }
        } 

        for(auto it:v)
        {
            cout<<char('a'+(stoi(it)-1));
        }
        cout<<endl;
    }
    return 0;
}