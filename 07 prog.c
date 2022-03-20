#include<stdio.h>
#include<conio.h>

void main()
{
	float po=3.14,b,c;
	int  a;
	
	printf("enter the radius of circle ");
	scanf("%d",&a);
	b=po*a*a;
	c=2*po*a;
	printf("\n area of circle =%f",b);
	printf("\n perimeter of circle =%f",c);
	getch();
}
