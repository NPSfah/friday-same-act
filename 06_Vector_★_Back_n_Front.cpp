#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,c = 1,x;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(c%2 == 1)
        {
            v.push_back(x);
        }else{
            v.insert(v.begin(),x);
        }
        c++;
    }
    while(cin>>x)
    {
        if(x == ' ')
        {
            break;
        }
        if(c%2 == 1)
        {
            v.push_back(x);
        }else{
            v.insert(v.begin(),x);
        }
        c++;
    }
    while(1)
    {
        cin>>x;
        if(x == -1)
        {
            break;
        }else{
            if(c%2 == 1)
            {
                v.push_back(x);
            }else{
                v.insert(v.begin(),x);
            }
        }
        c++;
    }
    cout<<"[";
    vector<int>::iterator it;
    bool f = false;
    for(it = v.begin();it != v.end();it++)
    {
        if(*it == -1)
        {
            continue;
        }
        if(!f)
        {
            cout<<*it;
            f = true;
        }else{
            cout<<", "<<*it;
        }
    }
    cout<<"]";
    return 0;
}
