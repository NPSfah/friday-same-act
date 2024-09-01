#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string word;
    while(getline(cin,word))
    {
        bool w = false;
        char chk = ' ';
        int memi1 = 1e9,memi2 = 1e9;
        for(int i=1;i<word.length();i++)
        {
            if((word[i] == ' ' || ((word[i]>='A' && word[i]<='Z') || (word[i]>='a' && word[i]<='z'))) && (word[i-1] != ' ' && !((word[i-1]>='A' && word[i-1]<='Z') || (word[i-1]>='a' && word[i-1]<='z'))))
            {
                memi1 = i;
                memi1--;
                break;
            }
        }
        for(int i=0;i<word.length()-1;i++)
        {
            if((word[i] == ' ' || ((word[i]>='A' && word[i]<='Z') || (word[i]>='a' && word[i]<='z'))) && (word[i+1] != ' ' && !((word[i+1]>='A' && word[i+1]<='Z') || (word[i+1]>='a' && word[i+1]<='z'))))
            {
                memi2 = i;
                memi2++;
                break;
            }
        }
        int index = min(memi1,memi2);
        if(index<word.length())
        {
            chk = word[index];
        }
        for(int i=0;i<word.length();i++)
        {
            if(word[i] == chk)
            {
                if(w == false)
                {
                    w = true;
                }else{
                    w = false;
                }
                continue;
            }else{
                if(w)
                {
                    cout<<word[i];
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
