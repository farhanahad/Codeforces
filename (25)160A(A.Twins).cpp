#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x[100],sum=0,sum2=0,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        sum+=x[i];
    }
    sum=sum/2;
    sort(x,x+n);
    for(int j=n-1;j>=0;j--)
    {
        sum2+=x[j];
        count++;
        if(sum<sum2)
            break;
    }
    cout<<count;

}

