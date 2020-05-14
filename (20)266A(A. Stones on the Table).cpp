#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int i,n,x=0;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
            x++;
    }
    cout<<x;
}
