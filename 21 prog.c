#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int n1, i, n2,n;
	printf("\n krishna sharma \n");

  printf("\n Enter the first number of range :");
  scanf("%d", & n1);
  printf("enter the second number of range :");
  scanf("%d",&n2);

  for (i = n1; i <= n2; i++) 
  {
  n=sqrt(i);
  if(n*n==i)
  {
  	printf("\n  %d",i);
  }
  
    }
    getch();
  }

