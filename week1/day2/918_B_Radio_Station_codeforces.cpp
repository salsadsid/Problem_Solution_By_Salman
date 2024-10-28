//============================================================================
// Problem     : https://codeforces.com/contest/918/problem/B
// Name        : 918_B_Radio_Station_codeforces.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
// Difficuly   : 900
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int serversN,commandsN;
    cin>>serversN>>commandsN;
    vector<pair<string,string>> servers;

    while(serversN--)
    {   
        string a,b;
        cin>>a>>b;
        servers.push_back({a,b});
    }

    while(commandsN--)
    {
        string c,d;
        cin>>c>>d;
        d.pop_back();

        for(auto [f,g]:servers)
        {
            if(d==g)
            {
                cout<<c<<" "<<g<<";"<<" #"<<f<<endl;
                break;
            }
        }
    }
}