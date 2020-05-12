#include<iostream>
using namespace std;
int main()
{
    int n,i,a,b,c,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a+b+c>=2)
            count++;
    }


    cout<<count;
}
