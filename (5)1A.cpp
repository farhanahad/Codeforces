#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,p,q;
    cin>>a>>b>>c;
    p=a/c;
    if(a%c)
        p++;
    q=b/c;
    if(b%c)
        q++;
    cout<<p*q;


}
