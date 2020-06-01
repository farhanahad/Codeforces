#include<iostream>
using namespace std;
int main()
{
    int a,i,j;
    cin>>a;
    int arr[a];
    for(i=0;i<a;i++)
        cin>>arr[i];
    for(j=1;j<=a;j++)
    {
        for(i=0;i<a;i++)
        {
            if(arr[i]==j)
            {
            cout<<i+1<<" ";
            }
        }

        }

    }


