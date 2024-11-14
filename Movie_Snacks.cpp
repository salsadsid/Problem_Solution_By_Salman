#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int sumOfab= a+b;
    int chefNeed=0;
    if(sumOfab<c)
    {
        chefNeed=(sumOfab*2)+b;
    }
    else
    {
        chefNeed=(c*2)+b;
    }

    cout<<chefNeed<<endl;
    return 0;
}