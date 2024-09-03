#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    string q[n];
    string ans[n];
    for(int i=0;i<n;i++)
    {
        cin>>q[i];
        ans[i] = q[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            bool chkq = false;
            if(q[i][j] == 'Q')
            {
                int k = 1;
                while(1)
                {
                    if(k+i >= n)
                    {
                        break;
                    }
                    if(q[i+k][j] == 'Q')
                    {
                        ans[i+k][j] = '-';
                        chkq = true;
                    }
                    k++;
                }
                k = 1;
                while(1)
                {
                    if(i-k < 0)
                    {
                        break;
                    }
                    if(q[i-k][j] == 'Q')
                    {
                        ans[i-k][j] = '-';
                        chkq = true;
                    }
                    k++;
                }
                k = 1;
                while(1)
                {
                    if(k+j >= n)
                    {
                        break;
                    }
                    if(q[i][j+k] == 'Q')
                    {
                        ans[i][j+k] = '-';
                        chkq = true;
                    }
                    k++;
                }
                k = 1;
                while(1)
                {
                    if(j-k < 0)
                    {
                        break;
                    }
                    if(q[i][j-k] == 'Q')
                    {
                        ans[i][j-k] = '-';
                        chkq = true;
                    }
                    k++;
                }
                k = 1;
                while(1)
                {
                    if(i-k < 0 || j-k < 0)
                    {
                        break;
                    }
                    if(q[i-k][j-k] == 'Q')
                    {
                        ans[i-k][j-k] = '-';
                        chkq = true;
                    }
                    k++;
                }
                k = 1;
                while(1)
                {
                    if(i+k >= n || j+k >= n)
                    {
                        break;
                    }
                    if(q[i+k][j+k] == 'Q')
                    {
                        ans[i+k][j+k] = '-';
                        chkq = true;
                    }
                    k++;
                }
                k = 1;
                while(1)
                {
                    if(i-k < 0 || j+k >= n)
                    {
                        break;
                    }
                    if(q[i-k][j+k] == 'Q')
                    {
                        ans[i-k][j+k] = '-';
                        chkq = true;
                    }
                    k++;
                }
                k = 1;
                while(1)
                {
                    if(i+k >= n || j-k < 0)
                    {
                        break;
                    }
                    if(q[i+k][j-k] == 'Q')
                    {
                        ans[i+k][j-k] = '-';
                        chkq = true;
                    }
                    k++;
                }
                if(chkq)
                {
                    ans[i][j] = '-';
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<"\n";
    }
    return 0;
}
