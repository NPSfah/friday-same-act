#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long n,div = 3;
    cin>>n;
    bool chk;
    while(1)
    {
        chk = false;
        if(n%2 == 0)
        {
            cout<<2;
            chk = true;
            n/=2;
        }else{
            if(n%div == 0)
            {
                cout<<div;
                chk = true;
                n/=div;
            }else{
                div+=2;
            }
        }
        if(n == 1)
        {
            break;
        }
        if(chk)
        {
            cout<<"*";
        }
    }
    return 0;
}
