#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int d1,m1,y1,d2,m2,y2,sumday = 0;
    cin>>d1>>m1>>y1>>d2>>m2>>y2;
    y1-=543;
    y2-=543;
    if(m1 == 2)
    {
        if(y1%400 == 0)
        {
            sumday += (29-d1+1);
        }else if(y1%4 == 0 && y1%100 != 0)
        {
            sumday += (29-d1+1);
        }else{
            sumday += (28-d1+1);
        }
    }else if(m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12)
    {
        sumday += (31-d1+1);
    }else{
        sumday += (30-d1+1);
    }
    if(m1+1 == 2)
    {
        if(y1%400 == 0)
        {
            sumday += (29+31+30+31+30+31+31+30+31+30+31);
        }else if(y1%4 == 0 && y1%100 != 0)
        {
            sumday += (29+31+30+31+30+31+31+30+31+30+31);
        }else{
            sumday += (28+31+30+31+30+31+31+30+31+30+31);
        }
    }else if(m1+1 == 3)
    {
        sumday += (31+30+31+30+31+31+30+31+30+31);
    }else if(m1+1 == 4)
    {
        sumday += (30+31+30+31+31+30+31+30+31);
    }else if(m1+1 == 5)
    {
        sumday += (31+30+31+31+30+31+30+31);
    }else if(m1+1 == 6)
    {
        sumday += (30+31+31+30+31+30+31);
    }else if(m1+1 == 7)
    {
        sumday += (31+31+30+31+30+31);
    }else if(m1+1 == 8)
    {
        sumday += (31+30+31+30+31);
    }else if(m1+1 == 9)
    {
        sumday += (30+31+30+31);
    }else if(m1+1 == 10)
    {
        sumday += (31+30+31);
    }else if(m1+1 == 11)
    {
        sumday += (30+31);
    }else if(m1+1 == 12)
    {
        sumday += 31;
    }
    sumday += ((y2-y1-1)*365);
    int ld;
    if(y2%400 == 0)
    {
        ld = 29;
    }else if(y2%4 == 0 && y2%100 != 0)
    {
        ld = 29;
    }else{
        ld = 28;
    }
    if(m2 == 2)
    {
        sumday += 31;
    }else if(m2 == 3)
    {
        sumday += (31+ld);
    }else if(m2 == 4)
    {
        sumday += (31+ld+31);
    }else if(m2 == 5)
    {
        sumday += (31+ld+31+30);
    }else if(m2 == 6)
    {
        sumday += (31+ld+31+30+31);
    }else if(m2 == 7)
    {
        sumday += (31+ld+31+30+31+30);
    }else if(m2 == 8)
    {
        sumday += (31+ld+31+30+31+30+31);
    }else if(m2 == 9)
    {
        sumday += (31+ld+31+30+31+30+31+31);
    }else if(m2 == 10)
    {
        sumday += (31+ld+31+30+31+30+31+31+30);
    }else if(m2 == 11)
    {
        sumday += (31+ld+31+30+31+30+31+31+30+31);
    }else if(m2 == 12)
    {
        sumday += (31+ld+31+30+31+30+31+31+30+31+30);
    }
    sumday += d2;
    sumday--;
    cout<<sumday<<" "<<round(sin((2*M_PI*sumday)/23)*100.0)/100.0<<" "<<round(sin((2*M_PI*sumday)/28)*100.0)/100.0<<" "<<round(sin((2*M_PI*sumday)/33)*100.0)/100.0;
    return 0;
}
