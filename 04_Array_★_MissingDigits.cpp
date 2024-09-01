#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string str;
    getline(cin,str);
    int arr[10];
    for(int i=0;i<10;i++)
    {
        arr[i] = 0;
    }
    for(int i=0;i<str.length();i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            arr[str[i]-'0']++;
        }
    }
    bool chk = true;
    for(int i=0;i<10;i++)
    {
        if(arr[i] == 0)
        {
            if(chk)
            {
                cout<<i;
            }else{
                cout<<","<<i;
            }
            chk = false;
        }
    }
    if(chk)
    {
        cout<<"None";
    }
    return 0;
}
