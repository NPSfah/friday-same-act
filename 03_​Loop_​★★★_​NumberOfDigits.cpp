#include<bits/stdc++.h>
using namespace std;
long long power(long long a,long long b)
{
    long long sum = 1;
    for(long long i=1;i<=b;i++)
    {
        sum*=a;
    }
    return sum;
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long m,n,c = 0,p1 = 0,p2;
    cin>>m>>n;
    while(1)
    {
        if(power(10,p1)>m)
        {
            break;
        }
        p1++;
    }
    if(m == 0)
    {
        c++;
    }
    if(n < (power(10,p1)-1))
    {
        c += ((n-m+1)*(p1));
    }else{
        c += (((power(10,p1)-1)-m+1)*(p1));
    }
    p2 = p1;
    while(1)
    {
        if(power(10,p2)>n)
        {
            break;
        }
        p2++;
    }
    if(m<power(10,p2-1))
    {
        c += ((n-power(10,p2-1)+1)*p2);
    }
    for(long long i=p1+1;i<p2;i++)
    {
        c += ((power(10,i)-1-power(10,i-1)+1)*i); 
    }
    cout<<c;
    return 0;
}
