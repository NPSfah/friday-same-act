#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,maxsq = -1e9,fnum = -1,co = 0,i = 0,memi = -1;
    vector<tuple<int,int,int>> v; 
    while(cin>>x)
    {
        if(x != fnum)
        {
            co = 1;
            fnum = x;
            memi = i;
        }else{
            co++;
        }
        if(co > maxsq)
        {
            maxsq = co;
            v.clear();
            v.push_back(make_tuple(x,memi,i+1));
        }else if(co == maxsq)
        {
            v.push_back(make_tuple(x,memi,i+1));
        }
        i++;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<get<0>(v[i])<<" --> x[ "<<get<1>(v[i])<<" : "<<get<2>(v[i])<<" ]\n";
    }
    return 0; 
}
