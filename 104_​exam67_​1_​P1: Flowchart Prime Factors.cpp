#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long n,d = 2;
    cin>>n;
    if(n<2)
    {
        cout<<"No prime factors for numbers less than 2.";
    }else{
        while(n>1)
        {
            if(d*d > n)
            {
                cout<<n;
                break;
            }else{
                while (n%d == 0)
                {
                    n/=d;
                    cout<<d<<" ";
                }
                d++;
            }
        }
    }
    return 0;
}
