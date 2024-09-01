#include<bits/stdc++.h>
using namespace std;
int score(char sn)
{
    if(sn == 'R')
    {
        return 1;
    }else if(sn == 'Y')
    {
        return 2;
    }else if(sn == 'G')
    {
        return 3;
    }else if(sn == 'N')
    {
        return 4;
    }else if(sn == 'B')
    {
        return 5;
    }else if(sn == 'P')
    {
        return 6;
    }else if(sn == 'K')
    {
        return 7;
    }
    return 0;
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    string End = "Y G N B P K";
    for(int i=0;i<n;i++)
    {
        int s = 0;
        bool chk = true;
        string snooker;
        if(i == 0)
        {
            getline(cin,snooker);
        }
        getline(cin,snooker);
        char front = ' ';
        for(int j=0;j<snooker.length();j+=2)
        {
            if(j == 0 && snooker[j] != 'R')
            {
                cout<<"WRONG_INPUT\n";
                chk = false;
                break;
            }else if(j == 0)
            {
                front = 'R';
                s += score(front);
                continue;
            }else{
                if(front == 'R' && snooker[j] == 'R')
                {
                    cout<<"WRONG_INPUT\n";
                    chk = false;
                    break;
                }else if(front == 'R' && snooker[j] != 'R')
                {
                    front = snooker[j];
                    s += score(snooker[j]);
                }else if(front != 'R' && snooker[j] == 'R')
                {
                    front = snooker[j];
                    s += score(snooker[j]);
                }else if(front != 'R' && snooker[j] != 'R')
                {
                    if(snooker.length()-j > 11)
                    {
                        cout<<"WRONG_INPUT\n";
                        chk = false;
                        break;
                    }
                    for(int k = j;k < snooker.length();k+=2)
                    {
                        if(snooker[k] == End[k-j])
                        {
                            s += score(snooker[k]);
                        }else{
                            cout<<"WRONG_INPUT\n";
                            chk = false;
                            break;
                        }
                    }
                    if(chk)
                    {
                        cout<<s<<"\n";
                        chk = false;
                    }
                    break;
                }
            }
        }
        if(chk)
        {
            cout<<s<<"\n";
        }
    }
    return 0;
}
