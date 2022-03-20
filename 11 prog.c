#include<stdio.h>
#include<conio.h>

void main()
{
	printf("krishna sharma \n");
	int a;
	printf("enter the age for checking voting right = ");
	scanf("%d",&a);
	
	if(a>=18)
	{
		printf("you are eligible for voting ");
		
	}
	else
	{
		printf("you are not eligible for voting ");
		
	}
	getch();
}
