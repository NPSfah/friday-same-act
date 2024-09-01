#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int> v;
    v.push_back(n);
    while(n != 1)
    {
        if(n%2 == 0)
        {
            n /= 2;
        }else{
            n = 3*n+1;
        }
        v.push_back(n);
    }
    int st,vs = v.size();
    st = max(vs-15,0);
    for(int i = st ; i<v.size();i++)
    {
        if(i != st )
        {
            cout<<"->";
        }
        cout<<v[i];
    }
    return 0;
}
