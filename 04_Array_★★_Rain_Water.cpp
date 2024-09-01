#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,sum = 0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int maxx = -1,maxindex = -1;
        bool chkf = false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>=maxx)
            {
                maxx = arr[j];
                maxindex = j;
            }
            if(arr[j]>=arr[i])
            {
                chkf = true;
                bool cl = false;
                for(int k=i+1;k<j;k++)
                {
                    sum+=(min(arr[j],arr[i])-arr[k]);
                    cl = true;
                }
                if(cl)
                {
                    i = j;
                    i--;
                }
                break;
            }
        }
        if(!chkf)
        {
            bool cl = false;
            for(int k=i+1;k<maxindex;k++)
            {
                sum+=(arr[maxindex]-arr[k]);
                cl = true;
            }
            if(cl)
            {
                i = maxindex;
                i--;
            }
        }
    }
    cout<<sum;
    return 0;
}
