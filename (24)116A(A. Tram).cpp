#include<iostream>
using namespace std;
int main()
{
    int n,a,b,i,sum=0,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        sum=(a+c)-b;
        if(sum<0)
            c=0;
        else
            c=sum;

    }
    cout<<sum;
}
