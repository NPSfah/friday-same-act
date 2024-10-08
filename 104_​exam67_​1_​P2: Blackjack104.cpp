#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,sumA = 0,sumB = 0,coA = 0;
    cin>>a>>b;
    string card;
    for(int i=0;i<a;i++)
    {
        cin>>card;
        if(card == "J" || card == "Q" || card == "K")
        {
            sumA += 10;
        }else if(card == "A")
        {
            coA++;
        }else{
            sumA += stoi(card);
        }
    }
    if(coA == 1)
    {
        if(sumA + 11 <= 21)
        {
            sumA += 11;
        }else{
            sumA++;
        }
    }else if(coA == 2)
    {
        if(sumA + 12 <= 21)
        {
            sumA += 12;
        }else{
            sumA += 2;
        }
    }else if(coA == 3){
        if(sumA + 13 <= 21)
        {
            sumA += 13;
        }else{
            sumA += 3;
        }
    }
    coA = 0;
    for(int i=0;i<b;i++)
    {
        cin>>card;
        if(card == "J" || card == "Q" || card == "K")
        {
            sumB += 10;
        }else if(card == "A")
        {
            coA++;
        }else{
            sumB += stoi(card);
        }
    }
    if(coA == 1)
    {
        if(sumB + 11 <= 21)
        {
            sumB += 11;
        }else{
            sumB++;
        }
    }else if(coA == 2)
    {
        if(sumB + 12 <= 21)
        {
            sumB += 12;
        }else{
            sumB += 2;
        }
    }else if(coA == 3){
        if(sumB + 13 <= 21)
        {
            sumB += 13;
        }else{
            sumB += 3;
        }
    }
    if(sumA == sumB || (sumA > 21 && sumB > 21))
    {
        cout<<"Draw\n";
    }else if((sumA > sumB && sumA <= 21) || sumB > 21)
    {
        cout<<"A\n";
    }else if((sumB > sumA && sumB <= 21) || sumA > 21){
        cout<<"B\n";
    }
    cout<<sumA<<" "<<sumB;
    return 0;
}
