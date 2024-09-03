#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<string,int> mp1;
    map<double,pair<string,vector<string>>> mp2;
    int n;
    cin>>n;
    string maj;
    int co;
    for(int i=0;i<n;i++)
    {
        cin>>maj>>co;
        mp1[maj] = co;
    }
    int m;
    cin>>m;
    string id,majs;
    double soc;
    for(int i=0;i<m;i++)
    {
        vector<string> tmp;
        cin>>id>>soc;
        for(int j=0;j<4;j++)
        {
            cin>>majs;
            tmp.push_back(majs);
        }
        pair<string,vector<string>> tmpp;
        tmpp = make_pair(id,tmp);
        mp2[soc] = tmpp;
    }
    map<string,string> mp3;
    map<double,pair<string,vector<string>>>::iterator it1 = mp2.end(),it11 = mp2.begin();
    it1--;
    it11--;
    while(it1 != it11)
    {
        pair<string,vector<string>> tmpxs = it1->second;
        vector<string> tmpv =  tmpxs.second;
        for(int i=0;i<4;i++)
        {
            if(mp1[tmpv[i]] > 0)
            {
                mp3[tmpxs.first] = tmpv[i];
                mp1[tmpv[i]]--;
                break;
            }
        }
        it1--;
    }
    map<string,string>::iterator it2;
    for(it2 = mp3.begin();it2 != mp3.end();it2++)
    {
        cout<<it2->first<<" "<<it2->second<<"\n";
    }
    return 0;
}
