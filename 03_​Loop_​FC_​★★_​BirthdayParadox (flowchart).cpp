#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float p,t=1.0;
    cin>>p;
    int k=1;
    while(1)
    {
        t = (t*(365-(k-1)))/365;
        if(1-t >= p)
        {
            cout<<k;
            break;
        }else{
            k++;
        }
    }
    return 0;
}
