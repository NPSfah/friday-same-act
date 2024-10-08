#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,w,dw,sum = 0;
    cin>>n>>w;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    dw = sum - w;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(i != j)
            {
                if(arr[j]+arr[i] == dw)
                {
                    cout<<j<<" "<<arr[j]<<"\n"<<i<<" "<<arr[i];
                    break;
                }
            }
        }
    }
    return 0;
}
