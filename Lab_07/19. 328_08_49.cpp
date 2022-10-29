//Tram 116A
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
   int  a, b,i, n;
   int x=0,sum=0;
   cin >> n;
   for(i=0; i<n; i++)
    {
      cin >> a >> b;
      sum=(a+x)-b;
      if(sum<0)
      {
         x=0;
      } else
      {
         x=sum;
      }
   }
   cout <<sum;
   return 0;
}
