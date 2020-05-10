#include<iostream>
using namespace std;
int main()
{
    int arr[100][100],n,i,j,sum=0,sum1=0,sum2=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
    for(j=0;j<3;j++)
    {
        cin>>arr[i][j];
    }
     sum +=arr[i][0];
     sum1 +=arr[i][1];
     sum2 +=arr[i][2];

    }
    if(sum1==0 && sum2==0 && sum==0)
        cout<<"YES";
    else
        cout<<"NO";
}
