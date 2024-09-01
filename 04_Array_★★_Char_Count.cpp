#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int arr[26];
    for(int i=0;i<26;i++)
    {
        arr[i] = 0;
    }
    string word;
    getline(cin,word);
    for(int i=0;i<word.length();i++)
    {
        if(word[i] >= 'A' && word[i] <= 'Z')
        {
            arr[word[i]-'A']++;
        }else if(word[i] >= 'a' && word[i] <= 'z')
        {
            arr[word[i]-'a']++;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]!=0)
        {
            cout<<char('a'+i)<<" -> "<<arr[i]<<"\n";
        }
    }
    return 0;
}
