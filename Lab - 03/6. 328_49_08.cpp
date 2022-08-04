// 282A Bit++
#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int x=0,a;
    string s;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>s;
        if(s[1]=='+')
            x++;
        else
            x--;
    }
    cout<<x;
}
