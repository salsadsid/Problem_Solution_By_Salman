//============================================================================
// Problem     : https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
// Name        : abc209_A_Counting_atcoder.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<0<<endl;
    }
    else
    {
        int count=0;
        count= b-a;
        cout<<count+1<<endl;
    }
    return 0;
}