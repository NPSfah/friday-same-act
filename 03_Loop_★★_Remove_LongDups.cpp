#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    int n;
    getline(cin,s);
    cin>>n;
    char last = ' ';
    int co = 0,st = -1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] != last)
        {
            if(co>=n)
            {
                for(int j = st;j<i;j++)
                {
                    if(j>=0)
                    {
                        s[j] = ' ';
                    }
                }
            }
            co = 1;
            st = i;
            last = s[i];
        }else{
            co++;
        }
    }
    if(co>=n)
    {
        for(int i=s.length()-1;i>=s.length()-co;i--)
        {
            s[i] = ' ';
        }
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            cout<<s[i];
        }
    }
    return 0;
}
