//============================================================================
// Problem     : https://www.codechef.com/problems/CHOLY
// Name        : CHOLY_Chess_Olympiad_codechef.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================


#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    double teamA=0;
    double teamB=0;

    if(a!=0)
    {
        teamA=teamA+a;
    }

    if(b!=0)
    {
        teamA= teamA+(b*0.5);
        teamB=teamB+(b*0.5);
    }

    if(c!=0)
    {
        teamB=teamB+c;
    }

    int sum=a+b+c;

    if(sum!=4)
    {
        teamA=teamA+(4-sum);
    }
    // cout<<teamA<<" "<<teamB<<endl;
    if(teamA >teamB)
    {
        cout<<"Yes"<<endl;
    }else
    {
        cout<<"No"<<endl;
    }

    return 0;
}