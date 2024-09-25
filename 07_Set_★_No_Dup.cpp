#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,s;
    set<int> ans;
    bool chk = false;
    while(cin>>n)
    {
        int s = ans.size();
        ans.insert(n);
        if(s == ans.size())
        {
            chk = true;
            cout<<s+1;
            break;
        }
    }
    if(!chk)
    {
        cout<<"-1";
    }
    return 0;
}
