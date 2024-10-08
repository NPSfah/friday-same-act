#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int tmp[j+1],l = 0;
            for(int k=i;k<=j;k++)
            {
                tmp[l] = arr[k];
                l++;
            }
            sort(tmp,tmp+l);
            int chk = 0,co = 0;
            for(int k=0;k<l;k++)
            {
                if(tmp[k] <= 0)
                {
                    break;
                }
                if(tmp[k]-chk == 1)
                {
                    co++;
                    chk = tmp[k];
                }else{
                    break;
                }
            }
            if(co == l)
            {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
