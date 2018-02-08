#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,result=0,b;
printf("Enter the no");
scanf("%d",&n);
b=n;
while(n>0)
{
rem=n%10;
result=result+(rem*rem*rem);
n=n/10;
}
if(b==result)
{
printf("%d yes",b);
}
else
{
printf("%d no",b);
}
}
