#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int y;
    cin>>y;
    y-=2543;
    y += (floor(y/4)+11);
    cout<<y%7;
    return 0;
}
