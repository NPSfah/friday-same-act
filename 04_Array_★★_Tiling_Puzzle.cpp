#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int m;
    cin>>m;
    int n = m*m;
    int zrow = 0,r = 0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i] == 0)
        {
            zrow = r;
        }
        if((i+1)%m == 0)
        {
            r++;
        }
    }
    int inv = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]> arr[j]) && ((arr[i] != 0) && (arr[j] != 0)))
            {
                inv++;
            }
        }
    }
    bool chk = false;
    if(n%2 == 1)
    {
        if(inv%2 == 0)
        {
            chk = true;
        }
    }else{
        if(inv%2 == 1)
        {
            if(zrow%2 == 0)
            {
                chk = true;
            }
        }else{
            if(zrow%2 == 1)
            {
                chk = true;
            }
        }
    }
    if(chk)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
