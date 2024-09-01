#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string str;
    cin>>str;
    bool c = true;
    for(int i=0;i<str.length();i++)
    {
        if(c!=1)
        {
            cout<<", ";
        }
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            cout<<str[i];
            c = false;
            for(int j=i+1;j<str.length();j++)
            {
                if(str[j] >= 'A' && str[j] <= 'Z' || str[j] >= '0' && str[j] <= '9')
                {
                    break;
                }else{
                    cout<<str[j];
                    i = j;
                }
            }
        }else if(str[i] >= 'a' && str[i] <= 'z'){
            cout<<str[i];
            c = false;
            for(int j=i+1;j<str.length();j++)
            {
                if(str[j] >= 'A' && str[j] <= 'Z' || str[j] >= '0' && str[j] <= '9')
                {
                    break;
                }else{
                    cout<<str[j];
                    i = j;
                }
            }
        }else if(str[i] >= '0' && str[i] <= '9')
        {
            cout<<str[i];
            c = false;
            for(int j=i+1;j<str.length();j++)
            {
                if(str[j] >= 'a' && str[j] <= 'z' || str[j] >= 'A' && str[j] <= 'Z')
                {
                    break;
                }else{
                    cout<<str[j];
                    i = j;
                }
            }
        }
    }
    return 0;
}
