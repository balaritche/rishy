#include<stdio.h>
#include<conio.h>
void main()
{
int n,b,rem,rev=0;
printf("enter the no");
scanf("%d",&n);
b=n;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(b==rev)
{
printf("%d is palindrome",b);
}
else
{
printf("%d is not palindrome",b);
}
}
