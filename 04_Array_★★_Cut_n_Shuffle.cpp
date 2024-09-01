#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    string card[n];
    string tmp[n];
    string cmd;
    for(int i=0;i<n;i++)
    {
        cin>>card[i];
    }
    getline(cin,cmd);
    getline(cin,cmd);
    for(int i=0;i<cmd.length();i++)
    {
        if(cmd[i] == 'C')
        {
            int a = 0,b = n/2;
            for(int j=0;j<n/2;j++)
            {
                tmp[j] = card[b];
                b++;
            }
            for(int j=(n/2);j<n;j++)
            {
                tmp[j] = card[a];
                a++;
            }
            for(int j=0;j<n;j++)
            {
                card[j] = tmp[j];
            }
        }else if(cmd[i] == 'S')
        {
            int a = 0,b = n/2;
            for(int j=0;j<n;j+=2)
            {
                tmp[j] = card[a];
                tmp[j+1] = card[b];
                a++;
                b++;
            }
            for(int j=0;j<n;j++)
            {
                card[j] = tmp[j];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<card[i]<<" ";
    }
    return 0;
}
