#include<bits/stdc++.h>
using namespace std;
string num1[20] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
string num2[10] = {"zero","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
string powp[4] = {"thousand","million","billion","trillion"};
string ans[100];
string anss[100];
int main ()
{
    long long n,i = 0;
    cin>>n;
    if(n == 0)
    {
        cout<<num1[n];
    }
    while(1)
    {
        if(n == 0)
        {
            break;
        }
        if(i%3 == 1)
        {
            ans[i] = num2[n%10];
        }else{
            ans[i] = num1[n%10];
        }
        n/=10;
        i++;
    }
    int k = 0, x = 0;
    for(int j=0;j<i;j++)
    {
        bool chkten = false;
        if(ans[j] == "zero")
        {
            if(j%3 == 0 && j!=0)
            {
                if(ans[j+1] != "zero")
                {
                    anss[k] = powp[x];
                    k++;
                }
                x++;
            }
            continue;
        }else if(j+1 < i && ans[j] != "zero" && ans[j+1] == "ten")
        {
            if(ans[j] == "one" && ans[j+1] == "ten")
            {
                anss[k] = num1[11];
                k++;
                chkten = true;
            }else if(ans[j] == "two" && ans[j+1] == "ten"){
                anss[k] = num1[12];
                k++;
                chkten = true;
            }else if(ans[j] == "three" && ans[j+1] == "ten")
            {
                anss[k] = num1[13];
                k++;
                chkten = true;
            }else if(ans[j] == "four" && ans[j+1] == "ten"){
                anss[k] = num1[14];
                k++;
                chkten = true;
            }else if(ans[j] == "five" && ans[j+1] == "ten")
            {
                anss[k] = num1[15];
                k++;
                chkten = true;
            }else if(ans[j] == "six" && ans[j+1] == "ten"){
                anss[k] = num1[16];
                k++;
                chkten = true;
            }else if(ans[j] == "seven" && ans[j+1] == "ten")
            {
                anss[k] = num1[17];
                k++;
                chkten = true;
            }else if(ans[j] == "eight" && ans[j+1] == "ten"){
                anss[k] = num1[18];
                k++;
                chkten = true;
            }else if(ans[j] == "nine" && ans[j+1] == "ten"){
                anss[k] = num1[19];
                k++;
                chkten = true;
            }
        }else{
            anss[k] = ans[j];
            k++;
        }
        if(j%3 == 2)
        {
            anss[k] = "hundred";
            swap(anss[k],anss[k-1]);
            k++;
        }
        if(j%3 == 0 && j!=0)
        {
            anss[k] = powp[x];
            swap(anss[k],anss[k-1]);
            k++;
            x++;
        }
        if(chkten)
        {
            j++;
        }
    }
    for(int c = k-1;c >= 0;c--)
    {
        cout<<anss[c]<<" ";
    }
    return 0;
}
