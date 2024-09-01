#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double x,y;
    cin>>x;
    y = (pow(x,sqrt(log(pow(x+1,2)))))/(10-x);
    y = round(y*1e6)/1e6;
    cout<<y;
    return 0;
}
