#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    double arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i == 0)
        {
            cout<<setprecision(10)<<arr[i]<<"\n";
        }else{
            double ans;
            for(int j=i;j>0;j--)
            {
                if(j == i)
                {
                    ans = arr[j-1]+(1/arr[j]);
                }else{
                    ans = arr[j-1]+(1/ans);
                }
            }
            cout<<setprecision(10)<<ans<<"\n";
        }
    }
    return 0;
}
