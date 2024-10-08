#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long n,sum = 0;
    cin>>n;
    string s;
    while(cin>>s)
    {
        long long tmp = 0,p = 1;
        for(long long i=s.length()-1;i>=1;i--)
        {
            tmp += ((s[i]-'0')*p);
            p *= 10;
        }
        sum += tmp;
    }
    cout<<sum*n;
    return 0;
}
