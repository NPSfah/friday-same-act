#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int x1[n],y1[n],x2[n],y2[n];
    for(int i=0;i<n;i++)
    {
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
    }
    int mema[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mema[i][j] = 0;
        }
    }
    int maxa = -1;
    for(int i=0;i<n;i++)
    {
        int a;
        for(int j=i+1;j<n;j++)
        {
            int maxx1 = -1e9,maxy1 = -1e9,minx2 = 1e9,miny2 = 1e9;
            if(x1[i] > maxx1)
            {
                maxx1 = x1[i];
            }
            if(x1[j] > maxx1)
            {
                maxx1 = x1[j];
            }
            if(y1[i] > maxy1)
            {
                maxy1 = y1[i];
            }
            if(y1[j] > maxy1)
            {
                maxy1 = y1[j];
            }
            if(x2[i] < minx2)
            {
                minx2 = x2[i];
            }
            if(x2[j] < minx2)
            {
                minx2 = x2[j];
            }
            if(y2[i] < miny2)
            {
                miny2 = y2[i];
            }
            if(y2[j] < miny2)
            {
                miny2 = y2[j];
            }
            if((minx2 >= maxx1) && (miny2 >= maxy1))
            {
                a = ((minx2-maxx1) * (miny2 - maxy1));
                mema[i][j] = a;
                if(a > maxa)
                {
                    maxa = a;
                }
            }
        }
    }
    if(maxa<=0)
    {
        cout<<"No overlaps";
    }else{
        cout<<"Max overlapping area = "<<maxa<<"\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mema[i][j] == maxa)
                {
                    cout<<"rectangles "<<i<<" and "<<j<<"\n";
                }
            }
        }
    }
    return 0;
}
