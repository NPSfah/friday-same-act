#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string n;
    cin>>n;
    cout<<n[0]<<"-"<<n[1]<<n[2]<<n[3]<<n[4]<<"-"<<n[5]<<n[6]<<n[7]<<n[8]<<n[9]<<"-"<<n[10]<<n[11]<<"-"<<(11-((13*(n[0]-'0'))+(12*(n[1]-'0'))+(11*(n[2]-'0'))+(10*(n[3]-'0'))+(9*(n[4]-'0'))+(8*(n[5]-'0'))+(7*(n[6]-'0'))+(6*(n[7]-'0'))+(5*(n[8]-'0'))+(4*(n[9]-'0'))+(3*(n[10]-'0'))+(2*(n[11]-'0')))%11)%10;
    return 0;
}
