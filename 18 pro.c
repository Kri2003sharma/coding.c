#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float p,  r, si, ci,x ;
	 int t;
	 printf("krishna sharma \n");

	 printf("\n Enter value of time (p): ");
	 scanf("%d", &t);
	 printf("Enter value of principle(t): ");
	 scanf("%f", &p);
	 printf("Enter value of rate (r): ");
	 scanf("%f", &r);
	 
	 si = (p * r * t)/100;
	 x=(1+r)/100;
	
	 ci = p * pow(x,t);
	
	 printf("\n Simple Interest = %f", si);
	 printf("\n Compound Interest = %f", ci);

	 
	 getch();
}

