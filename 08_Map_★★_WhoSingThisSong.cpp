#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    multimap<string,string> mmp;
    cin.ignore();
    string s;
    for(int i=0;i<n;i++)
    {
        getline(cin,s);
        int mema = 0,memb = 0;
        for(int j=1;j<s.size();j++)
        {
            if(s[j] == ' ' && s[j-1] == ',')
            {
                mema = j-1;
                memb = j;
            }
        }
        string tmp1 = "",tmp2 = "";
        for(int j=0;j<mema;j++)
        {
            tmp1 += s[j];
        }
        for(int j=memb+1;j<s.size();j++)
        {
            tmp2 += s[j];
        }
        mmp.insert(pair<string,string>(tmp1,tmp2));
    }
    string q;
    vector<string> song;
    getline(cin,q);
    string tmp = "";
    for(int i=0;i<q.size()-1;i++)
    {
        if(q[i] == ',' && q[i+1] == ' ')
        {
            song.push_back(tmp);
            tmp = "";
            i++;   
        }else{
            tmp += q[i];
        }
    }
    tmp += (q[q.size()-1]);
    song.push_back(tmp);
    for(auto x:song)
    {
        cout<<x<<" -> ";
        multimap<string,string>::iterator it = mmp.find(x);
        if(it == mmp.end())
        {
            cout<<"Not found";
        }else{
            int c = 0;
            while(it->first == x)
            {
                if(c != 0)
                {
                    cout<<", ";
                }
                cout<<it->second;
                c++;
                it++;
            }
        }
        cout<<"\n";
    }
    return 0;
}
