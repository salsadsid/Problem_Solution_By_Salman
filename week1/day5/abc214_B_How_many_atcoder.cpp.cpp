//============================================================================
// Problem     : https://atcoder.jp/contests/abc214/tasks/abc214_b
// Name        : abc214_B_How_many_atcoder.cpp
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
    cin>>a>>b;
    int count=0;
    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=100;j++)
        {
            for(int k=0;k<=100;k++)
            {
                if(i+j+k<=a && i*j*k<=b)
                {
                    count+=1;
                }
            }
        }
    }

    cout<<count<<endl;

    return 0;
}