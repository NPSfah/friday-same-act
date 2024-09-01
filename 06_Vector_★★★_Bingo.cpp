#include<bits/stdc++.h>
using namespace std;
string arr[7][7];
int countt[7][7];
vector<string> bingo;
int main ()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cout.tie(0);
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<7;j++)
        {
            countt[i][j] = 0;
        }
    }
    string b;
    for(int i=1;i<=5;i++)
    {
        cin>>b;
        bingo.push_back(b);
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>arr[i][j];
        }
    }
    string pingpong;
    int cping = 0;
    countt[0][6]++;
    countt[6][6]++;
    countt[3][6]++;
    countt[6][3]++;
    while(cin>>pingpong)
    {
        cping++;
        string cmd,num;
        cmd = pingpong[0];
        num = pingpong[1];
        if(pingpong.length() == 3)
        {
            num += pingpong[2];
        }
        for(int j=0;j<bingo.size();j++)
        {
            if(cmd == bingo[j])
            {
                for(int i=1;i<=5;i++)
                {
                    if(arr[i][j+1] == num && countt[i][j+1] == 0)
                    {
                        countt[i][j+1] = 1;
                        countt[i][6]++;
                        countt[6][j+1]++;
                        if(i == j+1)
                        {
                            countt[6][6]++;
                        }
                        if(i+1+j == 6)
                        {
                            countt[0][6]++;
                        }
                    }
                }
                break;
            }
        }
        bool chkbingo = false;
         bool chkc = false;
        for(int i=1;i<=5;i++)
        {
            if(countt[i][6] == 5)
            {
                if(!chkc)
                {
                chkc = true;
                cout<<cping<<"\n";
                }
                for(int j=1;j<=5;j++)
                {
                    if(arr[i][j] != "*")
                    {
                    cout<<bingo[j-1]<<arr[i][j];
                    }
                    if(j<5 && arr[i][j] != "*")
                    {
                    cout<<", ";
                    }
                }
                chkbingo = true;
                cout<<"\n";
            }
        }
        for(int j=1;j<=5;j++)
        {
            if(countt[6][j] == 5)
            {
                if(!chkc)
                {
                    chkc = true;
                    cout<<cping<<"\n";
                }
                for(int i=1;i<=5;i++)
                {
                    if(arr[i][j] != "*")
                    {
                    cout<<bingo[j-1]<<arr[i][j];
                    }
                    if(i<5 && arr[i][j] != "*")
                    {
                    cout<<", ";
                    }
                }
                chkbingo = true;
                cout<<"\n";
            }
        }
        if(countt[6][6] == 5)
        {
            if(!chkc)
            {
                chkc = true;
                cout<<cping<<"\n";
            }
            for(int i=1;i<=5;i++)
            {
                if(arr[i][i] != "*")
                {
                    cout<<bingo[i-1]<<arr[i][i];
                }
                if(i<5 && arr[i][i] != "*")
                {
                    cout<<", ";
                }
            }
            chkbingo = true;
            cout<<"\n";
        }
        if(countt[0][6] == 5)
        {
            if(!chkc)
            {
                chkc = true;
                cout<<cping<<"\n";
            }
            for(int i=1;i<=5;i++)
            {
                if(arr[6-i][i] != "*")
                {
                    cout<<bingo[i-1]<<arr[6-i][i];
                }
                if(i<5 && arr[6-i][i] != "*")
                {
                    cout<<", ";
                }
            }
            chkbingo = true;
            cout<<"\n";
        }
        if(chkbingo)
        {
            break;
        }
    }
    return 0;
}
