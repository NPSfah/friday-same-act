#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double x,sum = 0,c = 0;
    while(1)
    {
        cin>>x;
        if(x == -1)
        {
            if(c == 0)
            {
                cout<<"No Data";
            }
            break;
        }
        c++;
        sum+=x;
    }
    if(c!=0)
    {
        cout<<round((sum/c)*100)/100;
    }
    return 0;
}
