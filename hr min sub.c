#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,d,f;
    printf("Enter the hour:");
    scanf("%d",&a);
    printf("Enter the minute:");
    scanf("%d",&b);
    printf("Enter the hour:");
    scanf("%d",&c);
    printf("Enter the min:");
    scanf("%d",&d);
    f=a-c;
    printf("The sub hr is: %d",f);
    f=b-d;
    printf("\nThe sub min is: %d",f);
    
}
