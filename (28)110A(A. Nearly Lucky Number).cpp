#include<iostream>
#include<string>
using namespace std;
int main()
{
    int count=0,i;
    string n;
    cin>>n;
    for(i=0;i<n.size();i++)
    {
    if(n[i]=='7' || n[i]=='4')
        count++;
    }
    if(count==7 || count==4)
        cout<<"YES";
    else
        cout<<"NO";

}
