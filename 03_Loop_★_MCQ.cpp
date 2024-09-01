#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string a,b;
    int m,n,c = 0;
    getline(cin,a);
    m = a.length();
    getline(cin,b);
    n = b.length();
    if(n!=m)
    {
        cout<<"Incomplete answer";
    }else{
        for(int i=0;i<m;i++)
        {
            if(a[i] == b[i])
            {
                c++;
            }
        }
        cout<<c;
    }
    return 0;
}
