//============================================================================
// Problem     : https://atcoder.jp/contests/abc220/tasks/abc124_a?lang=en
// Name        : abc124_A_Buttons_atcoder.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;

    cin >> a >> b;

    if(a>b)
    {
        cout<<a+a-1<<endl;
    }
    else if(b>a)
    {
        cout<<b+b-1<<endl;
    }
    else
    {
        cout<<a*2<<endl;
    }
    
    return 0;
}