#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a>b)
    {
        swap(a,b);
    }
    if(c>d)
    {
        swap(c,d);
    }
    if(a>c)
    {
        swap(b,d);
        c = a;
    }
    a = e;
    if(a>b)
    {
        swap(a,b);
    }
    if(c>a)
    {
        swap(b,d);
        a = c;
    }
    if(a>d)
    {
        cout<<d;
    }else{
        cout<<a;
    }
    return 0;
}
