#include<stdio.h>
#include<conio.h>

void main()
{
	printf("krishna sharma \n");
	int x=10;
	int *y=&x;
	printf("%d \n",x); 
	printf("%u \n",&x);
	printf("%u \n",y);
	printf("%d \n",*y);
	printf("%u \n",&y);
	
	getch();
}
