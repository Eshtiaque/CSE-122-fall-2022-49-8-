//546A	Soldier and Banana
#include<iostream>
using namespace std;
int main()
{
    int k,n,w,i;
    int sum=0,borrrow;
    cin>>k>>n>>w;
    for(i=1; i<=w; i++)
    {
    sum+=k*i;
    }
    if(sum>n)
        cout<<sum-n<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}
