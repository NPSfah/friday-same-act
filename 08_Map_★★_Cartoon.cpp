#include<bits/stdc++.h>
using namespace std;
int main ()
{
    multimap<string,string> mmp;
    vector<string> ani;
    string a,b;
    while(cin>>a)
    {
        cin>>b;
        mmp.insert(pair<string,string>(b,a));
        bool chkp = true;
        for(int i=0;i<ani.size();i++)
        {
            if(b == ani[i])
            {
                chkp = false;
                break;
            }
        }
        if(chkp)
        {
            ani.push_back(b);
        }
    }
    for(auto x:ani)
    {
        multimap<string,string>::iterator it;
        cout<<x<<": ";
        for(it = mmp.begin();it != mmp.end();it++)
        {
            if(it->first == x)
            {
                cout<<it->second<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
