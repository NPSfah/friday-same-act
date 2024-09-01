#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    m = n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    while(1)
    {
        int chksort = -1,co = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=chksort)
            {
                co++;
                chksort = arr[i];
            }else{
                break;
            }
        }
        if(co == n)
        {
            break;
        }else{
            int maxx = -1,maxindex = -1;
            for(int i=0;i<m;i++)
            {
                if(arr[i] >= maxx)
                {
                    maxx = arr[i];
                    maxindex = i;
                }
            }
            if(arr[0] == maxx)
            {
                int be = 0,en = m-1;
                if(arr[m-1] == maxx)
                {
                    m--;
                    continue;
                }
                while(be<en)
                {
                    swap(arr[be],arr[en]);
                    be++;
                    en--;
                }
                for(int i=0;i<n;i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<"\n";
                if(arr[m-1] == maxx)
                {
                    m--;
                    continue;
                }
            }else{
                if(arr[m-1] == maxx)
                {
                    m--;
                    continue;
                }
                int str = 0;
                while(str<maxindex)
                {
                    swap(arr[str],arr[maxindex]);
                    str++;
                    maxindex--;
                }
                for(int i=0;i<n;i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<"\n";
                if(arr[m-1] == maxx)
                {
                    m--;
                    continue;
                }
            }
        }
    }
    return 0;
}
