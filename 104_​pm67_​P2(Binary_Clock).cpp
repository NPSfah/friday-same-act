#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string time;
    cin>>time;
    int h,m,s,c = 0, k = 0,j;
    int arr[4][6];
    for(int i=0;i<4;i++)
    {
        for(j = 0;j<6;j++)
        {
            arr[i][j] = 0;
        }
    }
    for(int i=0;i<time.length();i++)
    {
        j = 5;
        if(time[i] != ':')
        {
            vector<int> v;
            int tmp = time[i]-'0';
            if(c == 0)
            {
                while(1)
                {
                    v.push_back(tmp%2);
                    tmp/=2;
                    if(tmp == 0)
                    {
                        break;
                    }
                }
                c++;
                j = 4-v.size();
                for(int x=v.size()-1;x>=0;x--)
                {
                    arr[j][k] = v[x];
                    j++;
                }
                k++;
            }else if(c == 2 || c == 4)
            {
                while(1)
                {
                    v.push_back(tmp%2);
                    tmp/=2;
                    if(tmp == 0)
                    {
                        break;
                    }
                }
                c++;
                j = 4-v.size();
                for(int x=v.size()-1;x>=0;x--)
                {
                    arr[j][k] = v[x];
                    j++;
                }
                k++;
            }else{
                while(1)
                {
                    v.push_back(tmp%2);
                    tmp/=2;
                    if(tmp == 0)
                    {
                        break;
                    }
                }
                c++;
                j = 4-v.size();
                for(int x=v.size()-1;x>=0;x--)
                {
                    arr[j][k] = v[x];
                    j++;
                }
                k++;
            }
        }
    }
    for(int i=0;i<4;i++)
    {
        for(j = 0;j<6;j++)
        {
            if(j == 0 && i<=1)
            {
                cout<<" ";
            }else if((j == 2 || j == 4) && i <=0 )
            {
                cout<<" ";
            }else{
                cout<<arr[i][j];
            }
        }
        cout<<"\n";
    }
    return 0;
}
