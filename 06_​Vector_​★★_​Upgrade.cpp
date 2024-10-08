#include<bits/stdc++.h>
using namespace std;
int gtoi(string g)
{
    if(g == "A")
    {
        return 7;
    }else if(g == "B+"){
        return 6;
    }else if(g == "B"){
        return 5;
    }else if(g == "C+"){
        return 4;
    }else if(g == "C"){
        return 3;
    }else if(g == "D+"){
        return 2;
    }else if(g == "D"){
        return 1;
    }
    return 0;
}
int main ()
{
    string id,g;
    vector<pair<string,int>> v;
    string itog[8] = {"F","D","D+","C","C+","B","B+","A"};
    while(1)
    {
        cin>>id;
        if(id == "q")
        {
            break;
        }
        cin>>g;
        v.push_back(make_pair(id,gtoi(g)));
    }
    while(cin>>id)
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[i].first == id)
            {
                if(v[i].second < 7)
                {
                    v[i].second++;
                }
            }
        }
    }
    for(auto x:v)
    {
        cout<<x.first<<" "<<itog[x.second]<<"\n";
    }
    return 0;
}
