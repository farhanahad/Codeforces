#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0,sum1=0,sum2=0,x,y,z;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
        sum+=x;
        sum1+=y;
        sum+=z;
    }
    if(sum==0 && sum1==0 && sum2==0)
        cout<<"YES";
    else
        cout<<"NO";

}
