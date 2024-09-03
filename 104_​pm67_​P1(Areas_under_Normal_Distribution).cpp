#include<bits/stdtr1c++.h>
using namespace std;
double u,o,a,b,dx,sum = 0;
double sol(double x)
{
    return (1.0/(o*sqrt(2*M_PI)))*pow(M_E,((-1)*pow(x-u,2))/(2*pow(o,2)));
}
int main ()
{
    cin>>u>>o>>a>>b>>dx;
    int m = floor((b-a)/dx);
    for(int k=0;k<=m;k++)
    {
        sum += (sol(a+(k*dx))*dx);
    }
    cout<<round(sum*1e4)/1e4;
    return 0;
}
