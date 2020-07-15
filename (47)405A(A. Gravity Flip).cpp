#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a;
    int arr[a];
    for(i=0;i<a;i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+a);
    for(i=0;i<a;i++){
    cout<<arr[i]<<" ";
    }
}
