//Nearly Lucky Number 110A
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string str;
   cin >>str;
   int inc=0, i;
   for(i=0; i<str.size();i++)
   {
   if(str[i]=='4' || str[i]=='7')
    {
    inc++;
    }
   }
   if(inc==4 || inc==7)
    {
      cout << "YES" << endl;
    }
 else
    {
      cout << "NO" << endl;
    }
   return 0;
}
