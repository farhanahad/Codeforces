#include<iostream>
using namespace std;
int main()
{
    int arr[40],i,n,m,count=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>arr[i];
        for(i=0;i<n;i++)
        {
        if(arr[i]>=arr[m-1]&& arr[i]>0)
            count++;
        }
        cout<<count;

}
