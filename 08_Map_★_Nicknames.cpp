#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    string name,nickname;
    map<string,string> mp;
    for(int i=0;i<n;i++)
    {
        cin>>name>>nickname;
        mp[name] = nickname;
        mp[nickname] = name;
    }
    int m;
    cin>>m;
    string q;
    for(int i=0;i<m;i++)
    {
        cin>>q;
        if(mp.find(q) == mp.end())
        {
            cout<<"Not found\n";
        }else{
            cout<<mp[q]<<"\n";
        }
    }
    return 0;
}
