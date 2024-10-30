//============================================================================
// Problem     : https://codeforces.com/contest/381/problem/A
// Name        : 381_A_Sereja_and_Dima_codeforces.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
// Difficuly   : 800
//============================================================================


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    deque<int> dq;

    int a;
    cin>>a;

    while(a--)
    {
        int b;
        cin>>b;
        dq.push_back(b);
    }

    int player1sum=0;
    int player2sum=0;
    int dqLen=dq.size();
    for(int i=1;i<=dqLen;i++)
    {
        int c=dq[0],d=dq[dq.size()-1];       
        if(i%2!=0)
        {
            if(c==d)
            {
                player1sum+=c;
                dq.pop_back();
                break;
            }
            if(c>d)
            {
                player1sum+=c;       
                dq.pop_front();
                continue;
            }
            else
            {
                player1sum+=d;
                dq.pop_back();
                continue;
            }
        }
        else
        {
            
            if(c==d)
            {
                player2sum+=c;
                dq.pop_back();
                break;
            }
            if(c>d)
            {
                player2sum+=c;
                dq.pop_front();
                continue;
            }
            else
            {
                player2sum+=d;
                dq.pop_back();
                continue;
            }
        }
       
    }
    cout<<player1sum<<" "<<player2sum<<endl;
    return 0;
}