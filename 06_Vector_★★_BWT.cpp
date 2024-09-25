#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string x;
    cin>>x;
    x += "$";
    vector<string> v;
    for(int i=0;i<x.length();i++)
    {
        string tmp = "";
        for(int j=0;j<x.length();j++)
        {
            tmp += x[(i+j) % x.length()];
        }
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i][x.length()-1];
    }
    return 0;
}
