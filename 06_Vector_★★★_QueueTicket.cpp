#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int l;
    cin>>l;
    string cmd;
    int c = 0;
    vector<pair<int,int>> q;
    int startq = 0;
    float sum = 0;
    string cmdbf = "";
    int sell = 0;
    while(l--)
    {
        cin>>cmd;
        if(cmd == "reset")
        {
            cin>>startq;
        }else if(cmd == "new")
        {
            int t;
            cin>>t;
            cout<<">> ticket "<<startq<<"\n";
            q.push_back(make_pair(startq,t));
            startq++;
        }else if(cmd == "next")
        {
            if(cmdbf == "next")
            {
                c++;
            }
            cout<<">> call "<<q[c].first<<"\n";
            cmdbf = cmd;
        }else if(cmd == "order")
        {
            int t;
            cin>>t;
            cout<<">> qtime "<<q[c].first<<" "<<t-q[c].second<<"\n";
            sum += (t-q[c].second);
            c++;
            sell++;
            cmdbf = cmd;
        }else if(cmd == "avg_qtime")
        {
            cout<<">> avg_qtime "<<round((sum/sell)*100.0)/100.0<<"\n";
        }
    }
    return 0;
}
