#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    map<string,double> mp;
    string idc;
    double val;
    for(int i=0;i<n;i++)
    {
        cin>>idc>>val;
        mp[idc] = val;
    }
    string id;
    int money;
    cin>>money>>id;
    string change;
    cout<<money<<" "<<id;
    while(cin>>change)
    {
        if(id == change)
        {
            cout<<" -> "<<money<<" "<<id;
        }else{
            int tmp;
            if(id == "THB")
            {
                tmp = int(money/mp[change]);
                money = tmp;
                id = change;
            }else if(change == "THB"){
                tmp = int(money*mp[id]);
                money = tmp;
                id = change;
            }else{
                tmp = int(money*mp[id]/mp[change]);
                money = tmp;
                id = change;
            }
            cout<<" -> "<<money<<" "<<id;
        }
    }
    return 0;
}
