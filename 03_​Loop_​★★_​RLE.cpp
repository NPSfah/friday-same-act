#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    char mem = s[0];
    int c = 0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == mem)
        {
            c++;
        }else{
            cout<<mem<<" "<<c<<" ";
            mem = s[i];
            c = 1;
        }
    }
    cout<<mem<<" "<<c<<" ";
    return 0;
}
