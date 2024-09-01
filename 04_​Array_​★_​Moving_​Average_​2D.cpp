#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int r,c;
    cin>>r>>c;
    double arr[r+1][c+1];
    for(int i=0;i<=r;i++)
    {
        for(int j=0;j<=c;j++)
        {
            if(i == 0 || j == 0)
            {
                arr[i][j] == 0;
            }else{
                cin>>arr[i][j];
                arr[i][j]+=arr[i-1][j];
                arr[i][j]+=arr[i][j-1];
                arr[i][j]-=arr[i-1][j-1];
            }
        }
    }
    for(int i=3;i<=r;i++)
    {
        for(int j=3;j<=c;j++)
        {
            double sum;
            sum = arr[i][j]-arr[i-3][j]-arr[i][j-3]+arr[i-3][j-3];
            cout<<round((sum/9)*100)/100.0<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
