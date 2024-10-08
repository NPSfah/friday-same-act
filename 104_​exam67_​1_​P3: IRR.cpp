#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    double c[n+1],l = -1.0+1e-8,r = 1.0;
    for(int i=0;i<=n;i++)
    {
        cin>>c[i];
    }
    double irr;
    while(l<r)
    {
        irr = (l+r)/2;
        double sum = 0;
        for(int y=0;y<=n;y++)
        {
            sum += (c[y]/pow(1+irr,y));
        }
        if(abs(sum) <= 10e-8 )
        {
            break;
        }else if(sum > 0)
        {
            l = irr;
        }else if(sum < 0){
            r = irr;
        }
    }
    cout << setprecision(8) << irr << endl;
    return 0;
}
