#include<stdio.h>
void main()
{
 int a, s;
 printf("krishna sharma \n");
 printf("Enter value of a: ");
 scanf("%d",&a);
 s = 0;
 while(a > 0)
 {
 s = s*10;
 s = s + (a%10);
 a = a / 10;
 }
 printf("Reverse number is: %d",s);
 }
