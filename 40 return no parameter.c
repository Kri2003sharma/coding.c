
#include<stdio.h>
#include<conio.h>

int sum();
int main()
{
	printf("krishna sharma \n");
    int num;
    num = sum();
    printf("\nSum of two given values = %d", num);
    return 0;
}
  
int sum()
{
    int a = 50, b = 80, sum;
    sum = sqrt(a) + sqrt(b);
    return sum;
}
