//============================================================================
// Problem     : https://codeforces.com/problemset/problem/1807/A
// Name        : 1807_A_Plus_or_Minus_codeforces.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================


#include <bits/stdc++.h>
using namespace std;


int main()
{
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if((a+b)==c)
        {
            cout<<"+"<<endl;
        }
        else
        {
            cout<<"-"<<endl;
        }
    }
    return 0;
}