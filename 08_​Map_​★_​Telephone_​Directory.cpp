#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    string data;
    map<string,string> mp;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        getline(cin,data);
        string a = "",b = "";
        for(int j=data.size()-1;j>=0;j--)
        {
            string tmp = "";
            if(data[j] != ' ')
            {
                tmp += data[j];
                tmp += b;
                b = tmp;
            }else{
                for(int k=0;k<j;k++)
                {
                    tmp += data[k];
                }
                a = tmp;
                break;
            }
        }
        mp[a] = b;
        mp[b] = a;
    }
    int m;
    string q;
    cin>>m;
    cin.ignore();
    for(int i=0;i<m;i++)
    {
        getline(cin,q);
        cout<<q<<" --> ";
        if(mp.find(q)!=mp.end())
        {
            cout<<mp[q]<<"\n";
        }else{
            cout<<"Not found\n";
        }
    }
    return 0;
}
