#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    multiset<char> sa;
    multiset<char> sb;
    for(int i=0;i<a.length();i++)
    {
        if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z') || (a[i]>='0' && a[i]<='9'))
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                a[i]-='A';
                a[i]+='a';
            }
            sa.insert(a[i]);
        }
    }
    for(int i=0;i<b.length();i++)
    {
        if((b[i]>='A' && b[i]<='Z') || (b[i]>='a' && b[i]<='z') || (b[i]>='0' && b[i]<='9'))
        {
            if(b[i]>='A' && b[i]<='Z')
            {
                b[i]-='A';
                b[i]+='a';
            }
            sb.insert(b[i]);
        }
    }
    if(sa.size() != sb.size())
    {
        cout<<"NO";
    }else{
        multiset<char>::iterator it1 = sa.begin();
        multiset<char>::iterator it2 = sb.begin();
        bool chk = false;
        for(int i=0;i<sa.size();i++)
        {
            if(*it1 != *it2)
            {
                chk = true;
                break;
            }
            it1++;
            it2++;
        }
        if(chk)
        {
            cout<<"NO";
        }else{
            cout<<"YES";
        }
    }
    return 0;
}
