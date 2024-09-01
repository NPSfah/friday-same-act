#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string id1,id2;
    char comp1,cal11,cal21,comp2,cal12,cal22;
    double gpax1,gpax2;
    bool pass1 = false,pass2 = false;
    cin>>id1>>gpax1>>comp1>>cal11>>cal21;
    cin>>id2>>gpax2>>comp2>>cal12>>cal22;
    if(comp1 == 'A' && cal11 <= 'C' && cal21 <= 'C')
    {
        pass1 = true;
    }
    if(comp2 == 'A' && cal12 <= 'C' && cal22 <= 'C')
    {
        pass2 = true;
    }
    if(!(pass1 || pass2))
    {
        cout<<"None";
    }else if(pass1 && !pass2){
        cout<<id1;
    }else if(!pass1 && pass2){
        cout<<id2;
    }else{
        if(gpax1>gpax2)
        {
            pass1 = true;
            pass2 = false;
        }else if(gpax1<gpax2)
        {
            pass1 = false;
            pass2 = true;
        }else{
            pass1 = true;
            pass2 = true;
            if(cal11<cal12)
            {
                pass1 = true;
                pass2 = false;
            }else if(cal11>cal12)
            {
                pass1 = false;
                pass2 = true;
            }else{
                pass1 = true;
                pass2 = true;
                if(cal21<cal22)
                {
                    pass1 = true;
                    pass2 = false;
                }else if(cal21>cal22)
                {
                    pass1 = false;
                    pass2 = true;
                }else{
                    pass1 = true;
                    pass2 = true;
                }
            }
        }
        if(pass1 && pass2)
        {
            cout<<"Both";
        }else if(pass1)
        {
            cout<<id1;
        }else{
            cout<<id2;
        }
    }
    return 0;
}
