#include<iostream>
using namespace std;
int main()
{
int arr[30],n,i,j,temp;
cout<<"Enter the size of an array:";
cin>>n;
cout<<"Enter the elments of array:";
for(i=0;i<n;i++)
    cin>>arr[i];
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
}
if(arr[i]<arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
cout<<"Second Largest number:"<<arr[1];
cout<<"Second smallest number:"<<arr[n-2]
