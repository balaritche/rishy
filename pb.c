#include <stdio.h>
int
main (void)
{
  
int c, b, flag;
  
scanf ("%d%d", &c, &b);
  
printf ("\n The prime numbers between %d and %d are:", c, b);
  
for (int i = c + 1; i < b; i++)
    
    {
      
flag = 0;
      
for (int j = 2; j <= i / 2; j++)
	
	{
	  
if (i % j == 0)
	    
	    {
	      
flag = 1;
	      
break;
	    
}
	
}
      
 
if (flag == 0)
	
	{
	  
printf ("%d\n", i);
	
}
    
}
  
return 0;

}
