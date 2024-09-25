#include<bits/stdc++.h>
using namespace std;
int atonum (string s)
{
    if(s == "A")
    {
        return 8;
    }else if(s == "B+")
    {
        return 7;
    }else if(s == "B")
    {
        return 6;
    }else if(s == "C+")
    {
        return 5;
    }else if(s == "C")
    {
        return 4;
    }else if(s == "D+")
    {
        return 3;
    }else if(s == "D")
    {
        return 2;
    }
    return 1;
}
string numtoa (int s)
{
    if(s == 8)
    {
        return "A";
    }else if(s == 7)
    {
        return "B+";
    }else if(s == 6)
    {
        return "B";
    }else if(s == 5)
    {
        return "C+";
    }else if(s == 4)
    {
        return "C";
    }else if(s == 3)
    {
        return "D+";
    }else if(s == 2)
    {
        return "D";
    }
    return "F";
}
bool cmp(pair<string,int> a,pair<string,int> b)
{
    return a.second > b.second;
}
int main ()
{
    int n;
    cin>>n;
    vector<pair<string,int>> v;
    string a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,atonum(b)));
    }
    string cmd;
    while(cin>>cmd)
    {
        string id = "",op = "";
        op += cmd[cmd.length()-1];
        for(int i=0;i<cmd.length()-1;i++)
        {
            id += cmd[i];
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i].first == id)
            {
                if(op == "+")
                {
                    if(v[i].second < 8)
                    {
                        v[i].second++;
                    }
                }else if(op == "-"){
                    if(v[i].second > 1)
                    {
                        v[i].second--;
                    }
                }
            }
        }
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<numtoa(v[i].second)<<"\n";
    }
    return 0;
}
