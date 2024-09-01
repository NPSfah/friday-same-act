#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string a,b;
    cin>>a;
    cin.ignore();
    getline(cin,b);
    int na,ia,ib,nb = 0;
    na = a.length();
    for(int i=b.length()-1;i>=0;i--)
    {
        if(b[i] == ' ')
        {
            break;
        }else if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u')
        {
            ib = i;
        }
        nb++;
    }
    for(int i=1;i<na;i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            ia = i;
            break;
        }
    }
    for(int i=0;i<ia;i++)
    {
        cout<<a[i];
    }
    for(int i=ib;i<b.length();i++)
    {
        cout<<b[i];
    }
    cout<<" ";
    for(int i=0;i<ib;i++)
    {
        cout<<b[i];
    }
    for(int i=ia;i<na;i++)
    {
        cout<<a[i];
    }
    return 0;
}
