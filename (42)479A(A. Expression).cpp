#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x,y,z,m,n;
    cin>>a>>b>>c;
    x=a+b*c;
    y=a*(b+c);
    z=a*b*c;
    m=(a+b)*c;
    n=a+b+c;
    int ans=max(x,(max(y,(max(z,(max(m,n)))))));
    cout<<ans;


}
