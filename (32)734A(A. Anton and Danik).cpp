#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,a,x=0,y=0;
    string s;
    cin>>a;
     cin>>s;
    for(i=0;i<a;i++)
    {

        if(s[i]=='A')
            x++;
        if(s[i]=='D')
            y++;

    }
    if(x>y)
        cout<<"Anton";
    else if(x<y)
        cout<<"Danik";
    else
        cout<<"Friendship";


}
