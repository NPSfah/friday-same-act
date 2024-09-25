#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string ta,tb;
    set<string> winner;
    set<string> loser;
    while(cin>>ta)
    {
        cin>>tb;
        winner.insert(ta);
        loser.insert(tb);
    }
    bool chk = true;
    for(auto x:winner)
    {
        if(loser.find(x) == loser.end())
        {
            cout<<x<<" ";
            chk = false;
        }
    }
    if(chk)
    {
        cout<<"None";
    }
    return 0;
}
