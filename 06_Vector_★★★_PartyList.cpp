#include<bits/stdc++.h>
using namespace std;
double sum = 0,avg = 0;
int sump = 0;
bool cmp1(tuple<string,int,int> a,tuple<string,int,int> b)
{
    return ((get<1>(a)/avg) - (floor(get<1>(a)/avg))) > ((get<1>(b)/avg) - (floor(get<1>(b)/avg)));
}
bool cmp2(tuple<string,int,int> a,tuple<string,int,int> b)
{
    if(get<2>(a) == get<2>(b))
    {
        return get<1>(a) > get<1>(b);
    }
    return get<2>(a) > get<2>(b);
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string party;
    int soc;
    vector<tuple<string,int,int>> v;
    while(1)
    {
        cin>>party;
        if(party == "END")
        {
            break;
        }
        cin>>soc;
        sum += soc;
        v.push_back(make_tuple(party,soc,0));
    }
    avg = sum/100.0;
    for(int i=0;i<v.size();i++)
    {
        get<2>(v[i]) = floor(get<1>(v[i])/avg);
        sump += get<2>(v[i]);
    }
    if(sump < 100)
    {
        sort(v.begin(),v.end(),cmp1);
        int s = 0;
        while(sump < 100)
        {
            get<2>(v[s])++;
            s++;
            sump++;
        }
    }
    sort(v.begin(),v.end(),cmp2);
    for(int i=0;i<v.size();i++)
    {
        if(get<2>(v[i]) != 0)
        {
            cout<<get<0>(v[i])<<" "<<get<2>(v[i])<<" "<<get<1>(v[i])<<"\n";
        }else{
            break;
        }
    }
    return 0;
}
