#include<iostream>
using namespace std;
int main()
{
    int a,n;
    cin>>a>>n;
    while(n--)
    {
        if(a%10==0)
            a=a/10;
        else
            a--;
    }
    cout<<a;
}
