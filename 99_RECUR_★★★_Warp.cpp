#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> adj[101];
int chk = 0;
void addEdge (int u,int v)
{
    int ch = 1;
    for(auto x:adj[u])
    {
        if(x == v)
        {
            ch = 0;
            break;
        }
    }
    if(ch)
    {
        adj[u].push_back(v);
    }
}
void sort2D ()
{
    for(int i=0;i<101;i++)
    {
        vector<int> tmp;
        int n = adj[i].size();
        for(int j=n-1;j>=0;j--)
        {
            tmp.push_back(adj[i][j]);
            adj[i].pop_back();
        }
        sort(tmp.begin(),tmp.end());
        for(int j=0;j<n;j++)
        {
            adj[i].push_back(tmp[j]);
        }
    }
}
void sol(vector<int> ans,int st,int ed)
{
    if(chk)
    {
        return ;
    }
    if(ans.size() != 0 && ans[ans.size()-1] == ed)
    {
        chk = 1;
        cout<<"yes";
        return ;
    }
    if(ans.size() == 0)
    {
        ans.push_back(st);
        sol(ans,st,ed);
    }else{
        for(auto i:adj[st])
        {
            if(i>ed)
            {
                return ;
            }
            ans.push_back(i);
            sol(ans,i,ed);
            ans.pop_back();
        }
    }
}
int main ()
{
    int n,a,b,st,ed;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
    {
        cin>>st>>ed;
        addEdge(st,ed);
    }
    vector<int> ans;
    sort2D();
    sol(ans,a,b);
    if(chk == 0)
    {
        cout<<"no";
    }
    return 0;
}
