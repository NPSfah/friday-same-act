#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    char cmd;
    multimap<string,pair<string,int>> mmp;
    multimap<string,string> mmp2;
    map<string,int> mp;
    set<string> sp;
    set<string> sb;
    for(int i=0;i<n;i++)
    {
        cin>>cmd;
        if(cmd == 'B')
        {
            string b,p;
            int s;
            cin>>b>>p>>s;
            sp.insert(p);
            sb.insert(b);
            multimap<string,pair<string,int>>::iterator it = mmp.find(p);
            while(it!=mmp.end() && it->first == p)
            {
                pair<string,int> tmp = it->second;
                if(tmp.first == b)
                {
                    tmp.second = -1;
                    it->second = tmp;
                }
                it++;
            }
            mmp.insert(pair<string,pair<string,int>>(p,make_pair(b,s)));
            mp[b] = 0;
        }else if(cmd == 'W')
        {
            string b,p;
            cin>>b>>p;
            multimap<string,pair<string,int>>::iterator it = mmp.find(p);
            while(it!=mmp.end() && it->first == p)
            {
                pair<string,int> tmp = it->second;
                if(tmp.first == b)
                {
                    tmp.second = -1;
                    it->second = tmp;
                }
                it++;
            }
        }
    }
    for(auto x:sp)
    {
        multimap<string,pair<string,int>>::iterator it = mmp.find(x);
        int maxx = 0;
        string win = "";
        while(it != mmp.end() && it->first == x)
        {
            pair<string,int> tmp = it->second;
            if(tmp.second > maxx)
            {
                maxx = tmp.second;
                win = tmp.first;
            }
            it++;
        }
        if(maxx > 0)
        {
            mmp2.insert(pair<string,string>(win,x));
            mp[win] += maxx;
        }
    }
    for(auto x:sb)
    {
        cout<<x<<": $"<<mp[x];
        if(mp[x] > 0)
        {
            cout<<" -> ";
        }
        multimap<string,string>::iterator it = mmp2.find(x);
        set<string> ans;
        while(it != mmp2.end() && it->first == x)
        {
            ans.insert(it -> second);
            it++;
        }
        for(auto a:ans)
        {
            cout<<a<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
