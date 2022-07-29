// 158A Next Round.
#include<iostream>
using namespace std;
int main()
{
    int n,k,i,l=0,a[100];
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
    if(a[i]>=a[k-1] && a[i]>0)
    l++;
    }
    cout<<l<<endl;
    return 0;
}
