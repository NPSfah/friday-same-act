#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string a,b;
    int m,n;
    getline(cin,a);
    m = a.length();
    getline(cin,b);
    n = b.length();
    int countword = 0;
    for(int i=0;i<n-m+1;i++)
    {
        int j = 0;
        if(b[i] == a[j] && i+m-1 < n)
        {
            int co = 0;
            for(j=0;j<m;j++)
            {
                if(a[j] == b[i+j])
                {
                    co++;
                }
            }
            if(co == m && !((b[i+j] >='A' && b[i+j] <= 'Z') || (b[i+j] >='a' && b[i+j] <= 'z')))
            {
                if(i>0 && !((b[i-1] >='A' && b[i-1] <= 'Z') || (b[i-1] >='a' && b[i-1] <= 'z')))
                {
                    countword++;
                    i = i+j-1;
                }else if(i == 0)
                {
                    countword++;
                    i = i+j-1;
                }
            }
        }
    }
    cout<<countword;
}
