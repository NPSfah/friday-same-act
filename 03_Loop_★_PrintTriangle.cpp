#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            cout<<".";
        }
       for(int j=1;j<=i*2-1;j++)
       {
            if(j == 1 || j == i*2-1 || i == n)
            {
                cout<<"*";
            }else{
                cout<<".";
            }
       }
        cout<<"\n";
    }
    return 0;
}
