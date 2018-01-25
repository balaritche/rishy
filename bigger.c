#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the no");
scanf("%d%d%d",a,b,c);
if(a>b && a>c)
{
printf("a is bigger");
}
else if(b>c)
{
printf("b is bigger");
}
else
{
printf("c is bigger);
}
getch();
}
