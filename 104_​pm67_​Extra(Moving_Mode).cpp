#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int k,n,m,a,b;
    cin>>k>>n>>m;
    int arr[n+1];
    int ans[n+1];
    for(int i=0;i<=n;i++)
    {
        arr[i] = 1e9+7;
        ans[i] = 1e9+7;
    }
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        arr[a] = b;
    }
    for(int i=1;i<=n;i++)
    {
        map<int,int> mp;
        for(int j=max(1,i-k);j<=min(n,i+k);j++)
        {
            if(arr[j] != 1e9+7 && mp.find(arr[j]) != mp.end())
            {
                mp[arr[j]]++;
            }else{
                mp[arr[j]] = 1;
            }
        }
        if(!mp.empty())
        {
            map<int,int>::iterator it = mp.begin();
            int maxx = -1e9+7,mem = -1;
            while(it != mp.end())
            {
                if(it->second > maxx)
                {
                    maxx = it->second;
                    mem = it->first;
                }
                it++;
            }
            ans[i] = mem;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(ans[i] == 1e9+7)
        {
            cout<<"X ";
        }else{
            cout<<ans[i]<<" ";
        }
    }
    return 0;
}
