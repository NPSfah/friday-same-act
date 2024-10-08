#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x<50)
    {
        while(1)
        {
            if(y>z)
            {
                if(y%2 == 0)
                {
                    x += ((y*y)+(z*z));
                    if(x%10 == 4)
                    {
                        break;
                    }else{
                        if(x%3 == 0)
                        {
                            y--;
                        }else{
                            z++;
                        }
                        if(x/(y+z) > 15)
                        {
                            break;;
                        }else{
                            continue;
                        }
                    }
                }else{
                    x = x-(y-z);
                    y++;
                    continue;
                }
            }else{
                break;
            }
        }
    }else{
        if(x > y)
        {
            if(x%2 == 0)
            {
                x *= 2;
                y = x+4;
                z = (y-x)*3;
            }else{
                if(y < z)
                {
                    x += y;
                    y = x*3;
                    z += y;
                }else{
                    x /= 2;
                    y *= 2;
                    z = x-y;
                }
            }
        }else{
            if(z%3 == 2)
            {
                x = y*5;
                y = x/2;
                z = y+7;
            }else{
                if(y > z)
                {
                    x += z;
                    y -= 3;
                    z = x*2;
                }else{
                    x--;
                    y += z;
                    z = y-4;
                }
            }
        }
    }
    cout<<x<<" "<<y<<" "<<z;
    return 0;
}
