#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string password1;
    while (getline(cin,password1))
    {
        int CA = 0,Ca = 0,N = 0,S = 0;
        if(password1.length()<8)
        {
            cout<<">> invalid\n";
        }else{
            for(int i=0;i<password1.length();i++)
            {
                if(password1[i]>='A' && password1[i]<='Z')
                {
                    CA++;
                }else if(password1[i]>='a' && password1[i]<='z')
                {
                    Ca++;
                }else if(password1[i]>='0' && password1[i]<='9')
                {
                    N++;
                }else{
                    S++;
                }
            }
            if(password1.length()>=12 && CA > 0 && Ca > 0 && N > 0 && S > 0)
            {
                cout<<">> strong\n";
            }else if(CA > 0 && Ca > 0 && N > 0){
                cout<<">> weak\n";
            }else{
                cout<<">> invalid\n";
            }
        }
    }
    return 0;
}
