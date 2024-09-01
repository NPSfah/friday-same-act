#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,sum = 0;
    cin>>a>>b>>c;
    c -= 543;
    if(b == 2)
    {
        sum += (31);
    }else if(b == 3)
    {
        sum += (60);
    }else if(b == 4)
    {
        sum += (91);
    }else if(b == 5)
    {
        sum += (121);
    }else if(b == 6)
    {
        sum += (152);
    }else if(b == 7)
    {
        sum += (182);
    }else if(b == 8)
    {
        sum += (213);
    }else if(b == 9)
    {
        sum += (244);
    }else if(b == 10)
    {
        sum += (274);
    }else if(b == 11)
    {
        sum += (305);
    }else if(b == 12)
    {
        sum += (335);
    }
    if(b > 2 && !(c%400 == 0 || (c%4 == 0 && c%100 != 0)))
    {
        sum--;
    }
    sum += a;
    cout<<sum;
    return 0;
}
