//============================================================================
// Problem     : https://atcoder.jp/contests/abc125/tasks/abc125_a
// Name        : abc125_A_Biscuit_Generator_atcoder.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================



#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double a,b,c;
    cin>>a>>b>>c;

    c=c+.5;

    int biscuits= c/a;

    cout<<biscuits*b;

    return 0;
}