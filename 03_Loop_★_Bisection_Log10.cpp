#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double a,l,u,x;
    cin>>a;
    l = 0,u = a;
    x = (l+u)/2;
    while(!(abs(a-pow(10.0,x))<=(pow(10,-10)*max(a,pow(10.0,x)))))
    {
        if(pow(10.0,x)>a)
        {
            u = x;
        }else if(pow(10.0,x)<a)
        {
            l = x;
        }
        x = (l+u)/2;
    }
    cout<<x;
    return 0;
}
