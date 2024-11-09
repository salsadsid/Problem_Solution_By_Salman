//============================================================================
// Problem     : https://atcoder.jp/contests/abc172/tasks/abc172_b
// Name        : abc172_B_Minor_Change_atcoder.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================


#include <bits/stdc++.h>
using namespace std;


int main()
{
    string a,b;
    cin>>a>>b;
    int count=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}