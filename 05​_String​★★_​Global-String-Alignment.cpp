#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string x,y;
    cin>>x>>y;
    int maxx = 0,movex = 0,maxy = 0,movey = 0;
    for(int i=0;i<y.size();i++)
    {
        int c = 0;
        for(int j=0;j<x.size();j++)
        {
            if(i+j < y.size() && x[j] == y[i+j])
            {
                c++;
            }
        }
        if(c > maxx)
        {
            maxx = c;
            movex = i;
        }
    }
    for(int i=0;i<x.size();i++)
    {
        int c = 0;
        for(int j=0;j<y.size();j++)
        {
            if(i+j < x.size() && y[j] == x[i+j])
            {
                c++;
            }
        }
        if(c > maxy)
        {
            maxy = c;
            movey = i;
        }
    }
    if(maxx > maxy)
    {
        cout<<setw(movex+x.size())<<setfill('-')<<x<<"\n"<<y<<"\n"<<maxx;
    }else if(maxx < maxy)
    {
        cout<<x<<"\n"<<setw(movey+y.size())<<setfill('-')<<y<<"\n"<<maxy;
    }else{
        if(movex < movey)
        {
            cout<<setw(movex+x.size())<<setfill('-')<<x<<"\n"<<y;
        }else{
            cout<<x<<"\n"<<setw(movey+y.size())<<setfill('-')<<y;
        }
        cout<<"\n"<<maxx;
    }
    return 0;
}
