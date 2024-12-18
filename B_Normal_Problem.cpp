#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int lenS=s.size();
        string sM;
        for (int i = 0; i < lenS; i++)
        {
            if(s[i]=='q')
            {
                sM+="p";
            }
            else if(s[i]=='p')
            {
                sM+="q";
            }
            else
            {
                sM+=s[i];
            }
        }
        reverse(sM.begin(),sM.end());
        cout<<sM<<endl;

    }
    return 0;
}