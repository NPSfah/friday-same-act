#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string plate;
    int n;
    int c = 0;
    cin>>plate>>n;
    c += ((plate[0]-'0')*676000);
    c += (((plate[1]-'A')*26 + (plate[2]-'A'))*1000);
    c += ((plate[4]-'0')*100 + (plate[5]-'0')*10 + (plate[6]-'0'));
    c += n;
    cout << c/676000;
    c %= 676000;
    int tmp = c/1000;
    char al = (tmp/26)+'A';
    cout<<al;
    tmp %= 26;
    al = tmp+'A';
    cout<<al<<"-";
    c %= 1000;
    if(c<10)
    {
        cout<<"00";
    }else if(c<100)
    {
        cout<<"0";
    }
    cout<<c;
    return 0;
}
