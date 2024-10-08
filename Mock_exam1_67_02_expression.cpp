#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double x,xd;
    cin>>x;
    xd = M_PI * x / 180.0;
    cout<<fixed<<setprecision(1)<<(sqrt((x*x) + (cos(xd)*cos(xd))))/(sin(xd)+((cos(xd)*cos(xd)*cos(xd))/((x*x)+1)));
    return 0;
}
