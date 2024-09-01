#include<bits/stdc++.h>
using namespace std;
string fullname[10] = {"Robert","William","James","John","Margaret","Edward","Sarah","Andrew","Anthony","Deborah"};
string nickname[10] = {"Dick","Bill","Jim","Jack","Peggy","Ed","Sally","Andy","Tony","Debbie"};
int main ()
{
    int n;
    string str;
    cin>>n;
    while(n--)
    {
        cin>>str;
        bool chk = true;
        for(int i=0;i<10;i++)
        {
            if(str == fullname[i])
            {
                cout<<nickname[i]<<"\n";
                chk = false;
                break;
            }
        }
        if(!chk)
        {
            continue;
        }
        for(int i=0;i<10;i++)
        {
            if(str == nickname[i])
            {
                cout<<fullname[i]<<"\n";
                chk = false;
                break;
            }
        }
        if(!chk)
        {
            continue;
        }else{
            cout<<"Not found\n";
        }
    }
    return 0;
}
