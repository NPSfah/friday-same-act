#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<string,string> mp;
    mp["2"] = "a";
    mp["22"] = "b";
    mp["222"] = "c";
    mp["3"] = "d";
    mp["33"] = "e";
    mp["333"] = "f";
    mp["4"] = "g";
    mp["44"] = "h";
    mp["444"] = "i";
    mp["5"] = "j";
    mp["55"] = "k";
    mp["555"] = "l";
    mp["6"] = "m";
    mp["66"] = "n";
    mp["666"] = "o";
    mp["7"] = "p";
    mp["77"] = "q";
    mp["777"] = "r";
    mp["7777"] = "s";
    mp["8"] = "t";
    mp["88"] = "u";
    mp["888"] = "v";
    mp["9"] = "w";
    mp["99"] = "x";
    mp["999"] = "y";
    mp["9999"] = "z";
    mp["0"] = " ";
    mp["a"] = "2";
    mp["b"] = "22";
    mp["c"] = "222";
    mp["d"] = "3";
    mp["e"] = "33";
    mp["f"] = "333";
    mp["g"] = "4";
    mp["h"] = "44";
    mp["i"] = "444";
    mp["j"] = "5";
    mp["k"] = "55";
    mp["l"] = "555";
    mp["m"] = "6";
    mp["n"] = "66";
    mp["o"] = "666";
    mp["p"] = "7";
    mp["q"] = "77";
    mp["r"] = "777";
    mp["s"] = "7777";
    mp["t"] = "8";
    mp["u"] = "88";
    mp["v"] = "888";
    mp["w"] = "9";
    mp["x"] = "99";
    mp["y"] = "999";
    mp["z"] = "9999";
    mp[" "] = "0";
    string cmd;
    while(cin>>cmd)
    {
        cin.ignore();
        if(cmd == "T2K")
        {
            string word;
            getline(cin,word);
            cout<<">> ";
            for(int i=0;i<word.size();i++)
            {
                if(word[i] >='A' && word[i] <= 'Z')
                {
                    word[i]-='A';
                    word[i]+='a';
                }
                if((word[i] >='a' && word[i] <= 'z') || word[i] == ' ')
                {
                    string tmp = "";
                    tmp += word[i];
                    cout<<mp[tmp]<<" ";
                }
            }
            cout<<"\n";
        }else if(cmd == "K2T")
        {
            string num;
            cout<<">> ";
            getline(cin,num);
            string tmp = "";
            vector<string> v;
            for(int i=0;i<num.size();i++)
            {
                if(num[i] != ' ')
                {
                    tmp += num[i];
                }else{
                    v.push_back(tmp);
                    tmp = "";
                }
            }
            if(tmp.length() != 0)
            {
                v.push_back(tmp);
            }
            for(auto x:v)
            {
                cout<<mp[x];
            }
            cout<<"\n";
        }
    }
    return 0;
}
