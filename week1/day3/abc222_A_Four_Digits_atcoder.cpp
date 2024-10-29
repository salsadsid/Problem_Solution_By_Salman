//============================================================================
// Problem     : https://atcoder.jp/contests/abc222/tasks/abc222_a
// Name        : abc222_A_Four_Digits_atcoder.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;

    cin >> a ;

    if(a<10)
    {
        cout<<"000"<<a<<endl;
    }
    else if(a<100)
    {
        cout<<"00"<<a<<endl;
    }
    else if(a<1000)
    {
        cout<<0<<a<<endl;
    }
    else
    {
        cout<<a<<endl;
    }
    
    return 0;
}