#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    string id;
    vector<string> v;
    multimap<string,string> mmp;
    for(int i=0;i<n;i++)
    {
        cin>>id;
        v.push_back(id);
        string x;
        while(1)
        {
            cin>>x;
            if(x == "*")
            {
                break;
            }
            mmp.insert(pair<string,string>(id,x));
        }
    }
    string q;
    cin>>q;
    int co = 0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i] == q)
        {
            continue;
        }
        multimap<string,string>::iterator it1 = mmp.find(q),it2 = mmp.find(v[i]);
        bool chk = false;
        while(it1->first == q && it1 != mmp.end())
        {
            it2 = mmp.find(v[i]);
            while(it2->first == v[i] && it2 != mmp.end())
            {
                if(it1->second == it2->second)
                {
                    chk = true;
                    break;
                }
                it2++;
            }
            it1++;
            if(chk)
            {
                break;
            }
        }
        if(chk)
        {
            cout<<">> "<<v[i]<<"\n";
            co++;
        }
    }
    if(co == 0)
    {
        cout<<">> Not Found";
    }
    return 0;
}
