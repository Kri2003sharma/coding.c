
#include <stdio.h>
#include<conio.h>

void function(int, int[], char[]);
 void main()
{
	printf("krishna sharma \n");
	int a = 20;
	int ar[5] = { 10, 20, 30, 40, 50 };
	char str[30] ;
	function(a, &ar[0], &str[0]);
	return 0;
}

void function(int a, int* ar, char* str)
{
	int i;
	printf(" %d\n\n", a);
	for (i = 0; i < 5; i++) {
		printf("value of ar[%d] is %d\n", i, ar[i]);
	}
	printf("\nvalue of str is %s\n", str);
	getch();
}

