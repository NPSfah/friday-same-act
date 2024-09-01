#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long double n;
    cin>>n;
    if(n>=10000000000)
    {
        n/=1000000000;
        n = round(n*1.0)/1.0;
        cout<<n<<"B";
    }else if(n>=1000000000)
    {
        n/=1000000000;
        n = round(n*10.0)/10.0;
        cout<<n<<"B";
    }else if(n>=10000000)
    {
        n/=1000000;
        n = round(n*1.0)/1.0;
        cout<<n<<"M";
    }else if(n>=1000000)
    {
        n/=1000000;
        n = round(n*10.0)/10.0;
        cout<<n<<"M";
    }else if(n>=10000)
    {
        n/=1000;
        n = round(n*1.0)/1.0;
        cout<<n<<"K";
    }else if(n>=1000)
    {
        n/=1000;
        n = round(n*10.0)/10.0;
        cout<<n<<"K";
    }else{
        cout<<n;
    }
    return 0;
}
