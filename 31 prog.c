#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,s;
printf("krishna sharma \n");
printf("Enter the year: ");
scanf("%d",&n);
if(n%400==0 && n%100==0)
printf("%d is leap year\n",n);
else
printf("%d is not a leap year\n",n);
printf("\nEnter the another year: ");
scanf("%d",&a);
if(a%4==0)
printf("%d is leap year\n",a);
else
printf(" %d is not a leap year\n",a);
getch();

}
