#include<iostream>
using namespace std;
int main()
{
int num,flag=0,i=2;
cout<<"Enter any number:";
cin>>num;
while(i<num)
{
if(num%i==0)
{
    flag=1;
    break;
}
i=+1;
}
if(flag==0)
cout<<num<<"Is a prime number";
else
cout<<num<<"Is not a prime number"'
return 0;
}
