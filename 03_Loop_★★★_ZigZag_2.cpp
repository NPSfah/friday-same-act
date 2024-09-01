#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i = 1,x,y,min998 = 1e9,max998 = -1e9,min999 = 1e9,max999 = -1e9;
    while(1)
    {
        cin>>x;
        if(x == -998)
        {
            cout<<min998<<" "<<max998;
            break;
        }else if(x == -999)
        {
            cout<<min999<<" "<<max999;
            break;
        }else{
            cin>>y;
        }
        if(i%2 == 1)
        {
            if(x<=min998)
            {
                min998 = x;
            }
            if(y>=max998)
            {
                max998 = y;
            }
            if(y<=min999)
            {
                min999 = y;
            }
            if(x>=max999)
            {
                max999 = x;
            }
        }else{
            if(y<=min998)
            {
                min998 = y;
            }
            if(x>=max998)
            {
                max998 = x;
            }
            if(x<=min999)
            {
                min999 = x;
            }
            if(y>=max999)
            {
                max999 = y;
            }
        }
        i++;
    }
    return 0;
}
