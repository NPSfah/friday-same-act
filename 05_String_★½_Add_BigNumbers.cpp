#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a = "0";
    string b;
    while(1)
    {
        cin>>b;
        if(b == "END")
        {
            break;
        }
        int na = a.length(),nb = b.length();
        int nc = max(na,nb)+1;
        int c[nc];
        for(int i=0;i<nc;i++)
        {
            c[i] = 0;
        }
        int idxa = na-1,idxb = nb-1;
        for(int i=nc-1;i>=1;i--)
        {
            if(idxa>=0)
            {
                c[i] += (a[idxa]-'0');
            }
            if(idxb>=0)
            {
                c[i] += (b[idxb]-'0');
            }
            idxa--;
            idxb--;
            if(c[i] >= 10)
            {
                c[i-1] += (c[i]/10);
                c[i] %= 10;
            }
        }
        string tmp = "";
        for(int i=0;i<nc;i++)
        {
            if(i == 0 && c[i] == 0)
            {
                continue;
            }
            tmp += (c[i]+'0');
        }
        a = tmp;
    }
    cout<<a;
    return 0;
}
