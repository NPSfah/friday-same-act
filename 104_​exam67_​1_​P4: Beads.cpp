#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxx = 0;
    for(int i=0;i<n;i++)
    {
        int sum,before;
        for(int j=0;j<n;j++)
        {
            sum = 0,before = -1;
            for(int k = i;k<n+i;k++)
            {
                if(k%n == j)
                {
                    continue;
                }
                if(before > arr[k%n])
                {
                    break;
                }
                sum += arr[k%n];
                before = arr[k%n];
            }
            if(sum > maxx)
            {
                maxx = sum;
            }
        }
        sum = 0,before = -1;
        for(int j=i;j<n+i;j++)
        {
            if(before > arr[j%n])
            {
                break;
            }
            sum += arr[j%n];
            before = arr[j%n];
        }
        if(sum > maxx)
        {
            maxx = sum;
        }
    }
    cout<<maxx;
    return 0;
}
