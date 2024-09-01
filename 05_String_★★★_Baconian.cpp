#include<bits/stdc++.h>
using namespace std;
string ULcode[12] = {"UUUU","UUUL","UULU","UULL","ULUU","ULUL","ULLU","ULLL","LUUU","LUUL","LULU","LULL"};
char realdata[12] = {'0','1','2','3','4','5','6','7','8','9','-',','};
void decode (string code)
{
    int n = code.length();
    string tmpul = "";
    for(int i=0;i<n;i++)
    {
        if(code[i]>='A' && code[i]<='Z')
        {
            tmpul += 'U';
        }else if(code[i]>='a' && code[i]<='z'){
            tmpul += 'L';
        }
    }
    string code4 = "";
    string decodedata = "";
    int m = tmpul.length();
    for(int i=3;i<m;i+=4)
    {
        code4 += tmpul[i-3];
        code4 += tmpul[i-2];
        code4 += tmpul[i-1];
        code4 += tmpul[i];
        for(int j=0;j<12;j++)
        {
            if(code4 == ULcode[j])
            {
                decodedata += realdata[j];
                break;
            }
        }
        code4 = "";
    }
    cout<<decodedata<<"\n";
    return ;
}
void encode (string fool,string code)
{
    int n = code.length();
    int nf = fool.length();
    string tmpul = "";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<12;j++)
        {
            if(code[i] == realdata[j])
            {
                tmpul += ULcode[j];
                break;
            }
        }
    }
    int counteng = 0;
    for(int i=0;i<nf;i++)
    {
        if((fool[i]>='A' && fool[i]<='Z') || (fool[i]>='a' && fool[i]<='z'))
        {
            counteng++;
        }
    }
    string longfool = "";
    int lfen = 0;
    int uln = tmpul.length();
    while(lfen<uln)
    {
        longfool += fool;
        lfen += counteng;
    }
    int lfn = longfool.length();
    int i = 0,j = 0;
    string encodedata = "";
    while(i<uln && j<lfn)
    {
        if(longfool[j] >= 'A' && longfool[j] <= 'Z')
        {
            if(tmpul[i] == 'U')
            {
                encodedata += longfool[j];
            }else{
                encodedata += (longfool[j]-'A'+'a');
            }
            i++;
            j++;
        }else if(longfool[j] >= 'a' && longfool[j] <= 'z')
        {
            if(tmpul[i] == 'L')
            {
                encodedata += longfool[j];
            }else{
                encodedata += (longfool[j]-'a'+'A');
            }
            i++;
            j++;
        }else{
            encodedata += longfool[j];
            j++;
        }
    }
    cout<<encodedata<<"\n";
    return ;
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string fool;
    char cmd;
    getline(cin,fool);
    while(cin>>cmd)
    {
        cin.ignore();
        string code;
        getline(cin,code);
        if(cmd == 'D')
        {
            decode(code);
        }else if(cmd == 'E')
        {
            encode(fool,code);
        }
    }
    return 0;
}
