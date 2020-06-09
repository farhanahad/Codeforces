#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,a;
    cin>>s>>a;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=a[i])
            cout<<"1";
        else
            cout<<"0";
    }
}
