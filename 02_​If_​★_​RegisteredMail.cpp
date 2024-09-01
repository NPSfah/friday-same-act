#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    if(n<=100)
    {
        cout<<18;
    }else if(n<=250)
    {
        cout<<22;
    }else if(n<=500)
    {
        cout<<28;
    }else if(n<=1000)
    {
        cout<<38;
    }else if(n<=2000)
    {
        cout<<58;
    }else{
        cout<<"Reject";
    }
    return 0;
}
