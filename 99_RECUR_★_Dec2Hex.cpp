#include <iostream>
using namespace std;
string dec2hex(int d) {
    string s;
    if (d < 16)
    {
        if(d == 0)
        {
            return "0";
        }else if(d == 1)
        {
            return "1";
        }else if(d == 2)
        {
            return "2";
        }else if(d == 3)
        {
            return "3";
        }else if(d == 4)
        {
            return "4";
        }else if(d == 5)
        {
            return "5";
        }else if(d == 6)
        {
            return "6";
        }else if(d == 7)
        {
            return "7";
        }else if(d == 8)
        {
            return "8";
        }else if(d == 9)
        {
            return "9";
        }else if(d == 10)
        {
            return "A";
        }else if(d == 11)
        {
            return "B";
        }else if(d == 12)
        {
            return "C";
        }else if(d == 13)
        {
            return "D";
        }else if(d == 14)
        {
            return "E";
        }else if(d == 15)
        {
            return "F";
        }
    }
    return dec2hex(d/16) + dec2hex(d%16);
}
int main() {
 int d;
 while (cin >> d) {
 cout << d << " -> " << dec2hex(d) << endl;
 }
 return 0;
}
