#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double a,b,c,d,sum = 0,maxx = -1e9,minn = 1e9;
    cin>>a>>b>>c>>d;
    sum = a+b+c+d;
    if(a>=maxx)
    {
        maxx = a;
    }
    if(b>=maxx)
    {
        maxx = b;
    }
    if(c>=maxx)
    {
        maxx = c;
    }
    if(d>=maxx)
    {
        maxx = d;
    }
    if(a<=minn)
    {
        minn = a;
    }
    if(b<=minn)
    {
        minn = b;
    }
    if(c<=minn)
    {
        minn = c;
    }
    if(d<=minn)
    {
        minn = d;
    }
    cout<<round(((sum-maxx-minn)/2)*100.0)/100.0;
    return 0;
}
