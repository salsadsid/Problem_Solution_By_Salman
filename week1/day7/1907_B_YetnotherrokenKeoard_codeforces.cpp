//============================================================================
// Problem     : https://codeforces.com/problemset/problem/1907/B
// Name        : 1907_B_YetnotherrokenKeoard_codeforces.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================


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
        string str;
        cin>>str;

        int strLen=str.length();

        vector<int>upper;
        vector<int>lower;

        for(int i=0;i<strLen;i++)
        {
            // cout<<str[i]<<endl;
            if(str[i]=='b' && !lower.empty())
            {
                str[lower[lower.size()-1]]='0';
                lower.pop_back();
                str[i]='0';
            }
            else if(str[i]=='B' && !upper.empty())
            {
                str[upper[upper.size()-1]]='0';
                upper.pop_back();
                str[i]='0';
            }
            else if(str[i]>='a'&&str[i]!='b')
            {
                lower.push_back(i);
            }
            
            else if(str[i]!='B'&&str[i]<='Z')  
            {
                upper.push_back(i);
            }
            else
            {
                str[i]='0';
            }

        }
        
        for(int i=0;i<strLen;i++)
        {
            if(str[i]!='0')
            {
                cout<<str[i];
            }
        }
        cout<<endl;
    }

    return 0;
}