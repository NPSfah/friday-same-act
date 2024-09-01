#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double xe,ye,re,rp,xm,ym,A,B,C,a,b,c,xp,yp;
    cin>>xe>>ye>>re>>rp>>xm>>ym;
    A = xm-xe;
    B = ym-ye;
    C = sqrt(pow(A,2)+pow(B,2));
    c = re-rp;
    a = (c/C)*A;
    b = (c/C)*B;
    xp = xe+a;
    yp = ye+b;
    cout<<round(xp)<<" "<<round(yp);
    return 0;
}
