#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,string> a,pair<int,string> b)
{
    if(a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first > b.first;
}
string sorts(string s)
{
    vector<char> v;
    for(int i=0;i<s.length();i++)
    {
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    string tmp = "";
    for(int i=0;i<v.size();i++)
    {
        tmp += v[i];
    }
    return tmp;
}
map<string,int> mp; 
void sol(string arr[],int n,string tmp,int c)
{
    if(c == n)
    {
        tmp = sorts(tmp);
        if(mp.find(tmp) == mp.end())
        {
            mp[tmp] = 1;
        }else{
            mp[tmp]++;
        }
        
        return ;
    }else{
        for(int i=0;i<arr[c].length();i++)
        {
            string stmp = tmp;
            tmp += arr[c][i];
            c++;
            sol(arr,n,tmp,c);
            c--;
            tmp = stmp;
        }
    }
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    string arr[n];
    string a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr[i] = "";
        set<char> sc;
        for(int j=0;j<a.length();j++)
        {
            sc.insert(a[j]);
        }
        for(auto x:sc)
        {
            arr[i] += x;
        }
    }
    string tmp;
    sol(arr,n,tmp,0);
    map<string,int>::iterator it;
    vector<pair<int,string>> st;
    for(it = mp.begin();it != mp.end();it++)
    {
        st.push_back(make_pair(it->second,it->first));
    }
    int m;
    cin>>m;
    sort(st.begin(),st.end(),cmp);
    int sv = st.size();
    for(int i=0;i<min(m,sv);i++)
    {
        cout<<st[i].second<<"\n";
    }
    return 0;
}
