#include<bits/stdc++.h>
using namespace std;
set<string> ans;
void sol(string str,bool chk[],int n,int co,string comb)
{
    if(co == n)
    {
        ans.insert(comb);
        return ;
    }else{
        for(int i=0;i<n;i++)
        {
            if(!chk[i])
            {
                string tmp = comb;
                comb += str[i];
                co++;
                chk[i] = true;
                sol(str,chk,n,co,comb);
                comb = tmp;
                co--;
                chk[i] = false;
            }
        }
    }
}
int main ()
{
    string str,comb = "";
    cin>>str;
    bool chk[str.size()];
    for(int i=0;i<str.size();i++)
    {
        chk[i] = false;
    }
    sol(str,chk,str.size(),0,comb);
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}
