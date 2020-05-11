#include<iostream>
using namespace std;
int main()
{
    int n,y,i,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>y;
        sum += y;
    }
    if(sum>=1)
        cout<<"HARD";
    else
        cout<<"EASY";

}
