#include<stdlib.h>
#include<stdio.h>
void main() 
{
	printf("krishna sharma \n");
   int a = 7;
   float b = 7.6;
   void *p;
   p = &a;
   printf("Integer variable is = %d", *( (int*) p) );
   p = &b;
   printf("\nFloat variable is = %f", *( (float*) p) );
   getch();
}
