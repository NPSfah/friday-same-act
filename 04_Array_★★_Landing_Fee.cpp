#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    string countries[n];
    int fee[n];
    for(int i=0;i<n;i++)
    {
        cin>>countries[i]>>fee[i];
    }
    string travel;
    getline(cin,travel);
    getline(cin,travel);
    string before = "  ";
    int sumfee = 0;
    for(int i=5;i<travel.length();i+=7)
    {
        if(i == 5)
        {
            string tmp = "";
            tmp += travel[i-1];
            tmp += travel[i];
            before = tmp;
        }else{
            if(!(before[0] == travel[i-1] && before[1] == travel[i]))
            {
                for(int j=0;j<n;j++)
                {
                    if(countries[j][0] == travel[i-1] && countries[j][1] == travel[i])
                    {
                        sumfee += fee[j];
                        before[0] = travel[i-1];
                        before[1] = travel[i];
                        break;
                    }
                }
            }
        }
    }
    cout<<sumfee;
    return 0;
}
