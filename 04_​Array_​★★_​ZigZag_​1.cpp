#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int x[n];
    int y[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    string cmd;
    cin>>cmd;
    int minn = 1e9,maxx = -1e9;
    if(cmd == "Zig-Zag")
    {
        for(int i=0;i<n;i++)
        {
            if(i%2 == 0)
            {
                if(x[i]<=minn)
                {
                    minn = x[i];
                }
                if(y[i]>=maxx)
                {
                    maxx = y[i];
                }
            }else{
                if(y[i]<=minn)
                {
                    minn = y[i];
                }
                if(x[i]>=maxx)
                {
                    maxx = x[i];
                }
            }
        }
    }else{
        for(int i=0;i<n;i++)
        {
            if(i%2 == 0)
            {
                if(y[i]<=minn)
                {
                    minn = y[i];
                }
                if(x[i]>=maxx)
                {
                    maxx = x[i];
                }
            }else{
                if(x[i]<=minn)
                {
                    minn = x[i];
                }
                if(y[i]>=maxx)
                {
                    maxx = y[i];
                }
            }
        }
    }
    cout<<minn<<" "<<maxx;
    return 0;
}
