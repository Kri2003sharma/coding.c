#include <stdio.h>
#include<conio.h> 

void main()
{
	
int a,b,c,greatest; 
printf("krishna sharma \n");

printf ("\nenter the three number ");
scanf ("\n%d %d %d",&a,&b,&c);
greatest= (a>b)?((a>c)?a:c):((b>c)?b:c); 
printf("\n the greatest number is =%d",greatest);
 getch();
}
