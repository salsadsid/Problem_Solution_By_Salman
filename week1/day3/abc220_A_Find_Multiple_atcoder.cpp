//============================================================================
// Problem     : https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en
// Name        : abc220_A_Find_Multiple_atcoder.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;

    cin >> a >> b >> c;
    int i=a;
    bool flag=false;
    for(;i<=b;i++)
    {   
        if(i%c==0)
        {
            flag=true;
            break;
        }
    }

    if(flag)
    {
        cout<<i<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}