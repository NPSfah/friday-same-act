#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}
int main ()
{
    long long ia,ib,ic,lcm,divb,divc,ans,gans;
    string b,c;
    cin>>ia>>b>>c;
    long long db = b.length(),dc = c.length();
    ib = stoi(b);
    ic = stoi(c);
    divb = pow(10,db);
    divc = (pow(10,dc)-1)*divb;
    lcm = (divb*divc)/gcd(divb,divc);
    ia *= lcm;
    ib *= (lcm/divb);
    ic *= (lcm/divc);
    ans = ia+ib+ic;
    gans = gcd(ans,lcm);
    cout<<ans/gans<<" / "<<lcm/gans;
    return 0;
}
