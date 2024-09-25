#include<bits/stdc++.h>
using namespace std;
long long powermod(long long a,long long k,long long m)
{
    if(k == 0)
    {
        return 1;
    }
    long long b = powermod(a,k/2,m)%m;
    if(k%2 == 0)
    {
        return (b%m * b%m)%m;
    }else{
        return (a%m * (b%m * b%m))%m;
    }
}
int main ()
{
    long long a,k,m;
    cin>>a>>k>>m;
    cout<<powermod(a,k,m);
    return 0;
}
