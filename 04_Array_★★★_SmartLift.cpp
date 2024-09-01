#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int nolift[n];
    int stlift[n];
    int edlift[n];
    for(int i=0;i<n;i++)
    {
        cin>>nolift[i]>>stlift[i]>>edlift[i];
    }
    int m;
    cin>>m;
    int st,ed;
    for(int i=0;i<m;i++)
    {
        cin>>st>>ed;
        int minn = 1e9,memlift = -1;
        for(int j=0;j<n;j++)
        {
            int sum = 0;
            if(stlift[j] < edlift[j])
            {
                if(st >= stlift[j] && st <= edlift[j])
                {
                    if(st < ed)
                    {
                        if(ed > edlift[j])
                        {
                            sum += (ed-edlift[j]);
                        }
                    }else
                    {
                        sum += (edlift[j]-ed);
                    }
                }else if(st < stlift[j])
                {
                    sum += (edlift[j] - st);
                    if(st < ed)
                    {
                        sum += (ed-st);
                    }else {
                        sum += (st-ed);
                    }
                }else if(st > edlift[j])
                {
                    sum += (st-edlift[j]);
                    if(st < ed)
                    {
                        sum += (ed-st);
                    }else{
                        sum += (st-ed);
                    }
                }
            }else if(stlift[j] > edlift[j])
            {
                if(st <= stlift[j] && st >= edlift[j])
                {
                    if(st > ed)
                    {
                        if(ed < edlift[j])
                        {
                            sum += (edlift[j]-ed);
                        }
                    }else if(st < ed)
                    {
                        sum += (ed-edlift[j]);
                    }
                }else if(st < edlift[j])
                {
                    sum += (edlift[j]-st);
                    if(st < ed)
                    {
                        sum += (ed-st);
                    }else{
                        sum += (st-ed);
                    }
                }else if(st > stlift[j])
                {
                    sum += (st-edlift[j]);
                    if(st < ed)
                    {
                        sum += (ed-st);
                    }else{
                        sum += (st-ed);
                    }
                }
            }else{
                sum += abs(edlift[j]-st);
                sum += abs(ed-st);
            }
            if(sum<minn)
            {
                minn = sum;
                memlift = nolift[j];
            }else if(sum == minn)
            {
                memlift = min(memlift,nolift[j]);
            }
        }
        cout<<">> "<<memlift<<"\n";
    }
    return 0;
}
