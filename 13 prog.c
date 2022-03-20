#include<stdio.h>
#include<conio.h>


void main() 
{
	printf("krishna sharma \n");
	int number;
    
	printf("Please enter a number: ");
	scanf("%d", &number);

	if (number>=100&number<=1000 ) 
    {
		printf("this number is greater than 100 \n",number);
	} 
   
    else
	{
		printf("this is number is not b\w 100 and 1000 \n",number);
	}
	getch();
}
