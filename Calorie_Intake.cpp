#include <bits/stdc++.h>
using namespace std;


int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    int totalCalories = y*z;

    if(totalCalories>x)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<x-totalCalories<<endl;
    }
    return 0;
}