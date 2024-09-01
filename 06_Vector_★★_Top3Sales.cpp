#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<tuple<double,string,double>> v;
    string name;
    double p;
    while(1)
    {
        cin>>name;
        if(name == "END")
        {
            break;
        }
        cin>>p;
        v.push_back(make_tuple(0,name,p));
    }
    string buy;
    while(cin>>buy)
    {
        for(int i=0;i<v.size();i++)
        {
            if(buy == get<1>(v[i]))
            {
                get<0>(v[i]) -= (get<2>(v[i]));
                break;
            }
        }
    }
    sort(v.begin(),v.end());
    bool chk = true;
    int n = v.size();
    for(int i=0;i<min(n,3);i++)
    {
        if(get<0>(v[i]) != 0)
        {
            chk = false;
            cout<<get<1>(v[i])<<" "<<abs(get<0>(v[i]))<<"\n";
        }
    }
    if(chk)
    {
        cout<<"No Sales";
    }
    return 0;
}
