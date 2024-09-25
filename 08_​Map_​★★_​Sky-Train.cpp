#include<bits/stdc++.h>
using namespace std;
int main ()
{
    multimap<string,string> mmp;
    string sat;
    while(getline(cin,sat))
    {
        string tmp1 = "",tmp2 = "";
        bool chk = false;
        for(int i=0;i<sat.length();i++)
        {
            if(sat[i] == ' ')
            {
                chk = true;
                continue;
            }
            if(!chk)
            {
                tmp1 += sat[i];
            }else{
                tmp2 += sat[i];
            }
        }
        if(chk)
        {
            mmp.insert(pair<string,string>(tmp1,tmp2));
            mmp.insert(pair<string,string>(tmp2,tmp1));
        }else{
            break;
        }
    }
    vector<string> v;
    set<string> ans;
    v.push_back(sat);
    int r = 2;
    while(r--)
    {
        vector<string> tmpv;
        for(int i=0;i<v.size();i++)
        {
            multimap<string,string>::iterator it = mmp.find(v[i]);
            ans.insert(v[i]);
            while(it->first == v[i] && it != mmp.end())
            {
                tmpv.push_back(it->second);
                ans.insert(it->second);
                it++;
            }
        }
        v.clear();
        for(auto x:tmpv)
        {
            v.push_back(x);
        }
    }
    for(auto a:ans)
    {
        cout<<a<<"\n";
    }
    return 0;
}
