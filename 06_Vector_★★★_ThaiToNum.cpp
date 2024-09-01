#include<bits/stdc++.h>
using namespace std;
string num[10] = {"soon", "neung", "song", "sam", "si", "ha", "hok", "chet", "paet", "kao"};
int tonum (string x)
{
    for(int i=0;i<10;i++)
    {
        if(x == num[i])
        {
            return i;
        }
    }
    return -1;
}
int pow10 (string x)
{
    if(x == "sip")
    {
        return 10;
    }else if(x == "roi")
    {
        return 100;
    }else if(x == "phan")
    {
        return 1000;
    }else if(x == "muen")
    {
        return 10000;
    }else if(x == "saen")
    {
        return 100000;
    }else if(x == "lan")
    {
        return 1000000;
    }
    return 1;
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string thai;
    while(getline(cin,thai))
    {
        int ans;
        if(thai == "q")
        {
            break;
        }
        vector<string> v;
        string tmp = "";
        for(int i=0;i<thai.length();i++)
        {
            if(thai[i] == ' ')
            {
                v.push_back(tmp);
                tmp = "";
            }else{
                tmp += thai[i];
            }
        }
        v.push_back(tmp);
        int sum = 0;
        for(int i = 0;i < v.size();i++)
        {
            int tmp1 = tonum(v[i]);
            if(tmp1 != -1)
            {
                if(i+1 < v.size())
                {
                    int tmp2 = pow10(v[i+1]);
                    sum += (tmp1*tmp2);
                    if(tmp2 > 1)
                    {
                        i++;
                    }
                }else{
                    sum += tmp1;
                }
            }else if(v[i] == "yi")
            {
                sum += 20;
                i++;
            }else if(v[i] == "sip")
            {
                sum += 10;
            }else if(v[i] == "et")
            {
                sum++;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
