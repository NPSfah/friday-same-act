#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,c = 0;
    vector<int> v;
    while(cin>>n)
    {
        bool chk = true;
        for(int i=0;i<v.size();i++)
        {
            if(n == v[i])
            {
                chk = false;
                break;
            }
        }
        if(chk)
        {
            v.push_back(n);
            c++;
        }
    }
    sort(v.begin(),v.end());
    int nv = v.size();
    cout<<c<<"\n";
    for(int i = 0;i<min(10,nv);i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
