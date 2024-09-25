#include<bits/stdc++.h>
using namespace std;
vector<int> sumsub;
bool cmp (vector<int> a,vector<int> b)
{
    int sum1 = 0,sum2 = 0;
    for(auto x:a)
    {
        sum1 += x;
    }
    for(auto x:b)
    {
        sum2 += x;
    }
    if(sum1 == sum2)
    {
        if(a.size() == b.size())
        {
            return a<b;
        }
        return a.size()<b.size();
    }
    return sum1>sum2;
}
int main ()
{
    string cmd;
    cin>>cmd;
    int x;
    vector<int> v;
    vector<vector<int>> subset;
    while(cin>>x)
    {
        v.push_back(x);
    }
    if(cmd == "first")
    {
        for(int i=0;i<v.size();i++)
        {
            if(subset.empty())
            {
                vector<int> tmp;
                tmp.push_back(v[i]);
                subset.push_back(tmp);
                sumsub.push_back(v[i]);
            }else{
                bool chk = true;
                for(int j=0;j<subset.size();j++)
                {
                    if(sumsub[j] + v[i] <= 100)
                    {
                        sumsub[j] += v[i];
                        subset[j].push_back(v[i]);
                        chk = false;
                        break;
                    }
                }
                if(chk)
                {
                    vector<int> tmp;
                    tmp.push_back(v[i]);
                    subset.push_back(tmp);
                    sumsub.push_back(v[i]);
                }
            }
        }
    }else if(cmd == "best")
    {
        for(int i=0;i<v.size();i++)
        {
            if(subset.empty())
            {
                vector<int> tmp;
                tmp.push_back(v[i]);
                subset.push_back(tmp);
                sumsub.push_back(v[i]);
            }else{
                bool chk = true;
                int minn = 1e9;
                int memj = -1;
                for(int j=0;j<subset.size();j++)
                {
                    if(sumsub[j] + v[i] <= 100)
                    {
                        chk = false;
                        if(100 - (sumsub[j] + v[i]) < minn)
                        {
                            minn = 100 - (sumsub[j] + v[i]);
                            memj = j;
                        }
                    }
                }
                if(chk)
                {
                    vector<int> tmp;
                    tmp.push_back(v[i]);
                    subset.push_back(tmp);
                    sumsub.push_back(v[i]);
                }else{
                    subset[memj].push_back(v[i]);
                    sumsub[memj] += v[i];
                }
            }
        }
    }
    for(int i = 0;i < subset.size();i++)
    {
        sort(subset[i].begin(),subset[i].end());
    }
    sort(subset.begin(),subset.end(),cmp);
    for(int i=0;i<subset.size();i++)
    {
        for(int j=0;j<subset[i].size();j++)
        {
            cout<<subset[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
