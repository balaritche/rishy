#include <stdio.h>
int
main () 
{
  
int n, f, g, i, z = 0;
  
printf ("enter the series");
  
scanf ("%d", &n);
  
printf ("enter the difference and first term");
  
scanf ("%d%d", &f, &g);
  
for (i = 0; i < n; i++)
    
    {
      
z = z + f;
      
f = g + f;
    
}
  
printf ("sum is:%d", z);
  
return 0;;

}
