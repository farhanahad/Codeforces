#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,cn=0,m=1;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
        if(a[i]>=a[i-1]){
                cn++;
        m=max(m,cn);
        }
        else
            cn=1;
    }
    cout<<m;
}
