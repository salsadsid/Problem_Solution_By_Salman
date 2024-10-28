//============================================================================
// Problem     : https://codeforces.com/problemset/problem/1927/A
// Name        : 1927_A_Make_it_White_codeforces.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
// Difficuly   : 800
//============================================================================

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
        string s;
        cin>>s;
        int startIndx=0;
        int endIndx=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                startIndx=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='B')
            {
                endIndx=i;
                break;
            }
        }
        cout<<endIndx-startIndx+1<<endl;
    }
}