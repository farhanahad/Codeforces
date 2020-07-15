#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,m,ans=0;
    cin>>a>>b;
    int arr[b];
    for(int i=0;i<b;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+b);
    m=arr[b-1]-arr[0];
    for(int i=a;i<=b;i++)
    {
        ans=arr[i-1]-arr[i-a];
        ans=abs(ans);
        m=min(m,ans);
    }
    cout<<m;
}
