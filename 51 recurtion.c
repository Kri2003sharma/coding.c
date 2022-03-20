#include<stdio.h>
#include<conio.h>

int sum(int n);

int main() 
{
	printf("krishna sharma \n");
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);
    return 0;
}

int sum(int n) {
    if (n != 0)
        
        return n + sum(n-1); 
    else
        return n;
}


