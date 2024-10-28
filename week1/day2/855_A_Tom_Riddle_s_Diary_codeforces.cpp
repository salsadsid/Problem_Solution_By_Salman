//============================================================================
// Problem     : https://codeforces.com/contest/855/problem/A
// Name        : 855_A_Tom_Riddle_s_Diary_codeforces.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
// Difficuly   : 800
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int namesN;
    cin>>namesN;
    vector<string> names;
    while(namesN--)
    {
        string s;
        cin>>s;

        if(names.size()==0)
        {
            names.push_back(s);
            cout<<"NO"<<endl;
        }
        else
        {
            bool flag= false;
            for(auto a:names)
            {
                if(a==s)
                {
                    flag=true;
                    break;
                }
            }

            if(flag)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                names.push_back(s);
                cout<<"NO"<<endl;
            }
        }
    }
}