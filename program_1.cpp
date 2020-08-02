#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter the values of a,b,c:";
cin>>a>>b>>c;
if(a>=b && a>=c)
{
cout<<"Largest Number is:"<<a;
}
if(b>=a && b>=c)
{
cout<<"Largest Number is:"<<b;
}
if(c>=a && c>=b)
{
cout<<"Largest Number is:"<<c;
}
return 0;
}
