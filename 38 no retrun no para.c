#include<stdio.h>
#include<conio.h>

void value(void);
void main()
{
	printf("krishna sharma \n");
    value();
}
void value(void)
{
    int year = 1, period = 5, amount = 5000, inrate = 0.12;
    float sum;
    sum = amount;
    while (year <= period) {
        sum = sum * (1 + inrate);
        year = year + 1;
    }
    printf(" The total amount is %f:", sum);
    getch();
}
