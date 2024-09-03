#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    vector<set<int>> vs;
    while(getline(cin,s))
    {
        string tmp = "";
        set<int> stmp;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] != ' ')
            {
                tmp += s[i];
            }else{
                stmp.insert(stoi(tmp));
                tmp = "";
            }
        }
        if(tmp.length()>0)
        {
            stmp.insert(stoi(tmp));
        }
        vs.push_back(stmp);
    }
    set<int> un = vs[0];
    set<int> inter = vs[0];
    set<int> diff = vs[0];
    for(int i=1;i<vs.size();i++)
    {
        for(auto x:vs[i])
        {
            un.insert(x);
        }
        set<int> tmp1;
        for(auto x:vs[i])
        {
            tmp1.insert(x);
        }
        for(auto x:inter)
        {
            tmp1.insert(x);
        }
        set<int> tmp2;
        for(auto x:tmp1)
        {
            if((inter.find(x) != inter.end()) && (vs[i].find(x) != vs[i].end()))
            {
                tmp2.insert(x);
            }
        }
        inter = tmp2;
        set<int> tmp3;
        for(auto x:vs[i])
        {
            tmp3.insert(x);
        }
        for(auto x:diff)
        {
            tmp3.insert(x);
        }
        set<int> tmp4;
        for(auto x:tmp3)
        {
            if(diff.find(x) != diff.end() && vs[i].find(x) == vs[i].end())
            {
                tmp4.insert(x);
            }
        }
        diff = tmp4;
    }
    cout<<"U:";
    if(un.size()!=0)
    {
        for(auto x:un)
        {
            cout<<" "<<x;
        }
    }else{
        cout<<" empty set";
    }
    cout<<"\n";
    cout<<"I:";
    if(inter.size()!=0)
    {
        for(auto x:inter)
        {
            cout<<" "<<x;
        }
    }else{
        cout<<" empty set";
    }
    cout<<"\n";
    cout<<"D:";
    if(diff.size()!=0)
    {
        for(auto x:diff)
        {
            cout<<" "<<x;
        }
    }else{
        cout<<" empty set";
    }
    cout<<"\n";
    return 0;
}
