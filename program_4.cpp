#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char str[100];
int i,length;
int flag=0;
cout<<"Enter the string:";
cin>>str;
length=strlen(str);
for(i=;i<length;i++)
{
    if(str[i]!=str[length-i-1])

{
    flag=1;
    break;
}
}
if(flag)
{
cout<<str<<"Is not a palindrome";
}
else
{
cout<<str<<"Is a palindrme";
}
return 0;
 }
