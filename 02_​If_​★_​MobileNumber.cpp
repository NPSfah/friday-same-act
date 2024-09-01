#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string number;
    cin>>number;
    if(number.length() != 10)
    {
        cout<<"Not a mobile number";
    }else if(number[0] == '0' && (number[1] == '6' || number[1] == '8' || number[1] == '9'))
    {
        cout<<"Mobile number";
    }else{
        cout<<"Not a mobile number";
    }
    return 0;
}
