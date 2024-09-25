#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string song,name,genre,time;
    map<string,int> mp;
    while(cin>>song)
    {
        cin>>name>>genre>>time;
        int ts = 0,memi = -1,p = 0;
        for(int i=time.length()-1;i>=0;i--)
        {
            if(time[i] == ':')
            {
                memi = i;
                break;
            }else{
                ts += ((time[i]-'0')*pow(10,p));
            }
            p++;
        }
        int tmpm = 0;
        p = 0;
        for(int i=memi-1;i>=0;i--)
        {
            tmpm += ((time[i]-'0')*pow(10,p));
            p++;
        }
        tmpm*=60;
        ts+=tmpm;
        if(mp.find(genre) == mp.end())
        {
            mp[genre] = ts;
        }else{
            mp[genre] += ts;
        }
    }
    vector<pair<int,string>> v;
    map<string,int>::iterator it;
    for(it = mp.begin();it != mp.end();it++)
    {
        v.push_back(make_pair(it->second,it->first));
    }
    sort(v.begin(),v.end());
    int coutp = 0;
    for(int i=v.size()-1;i>=0;i--)
    {
        if(coutp == 3)
        {
            break;
        }
        cout<<v[i].second<<" --> "<<v[i].first/60<<":"<<v[i].first%60<<"\n";
        coutp++;
    }
    return 0;
}
