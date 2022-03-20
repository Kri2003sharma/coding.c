#include<stdio.h>
#include<conio.h>
  
int add(int, int); 
  
int main()  
{  
printf("krishna sharma \n");
    int a, b;  
  
    printf("Enter 2  numbers \n");  
    scanf("%d%d", &a, &b);  
  
     
    printf("%d + %d = %d\n", a, b, add(a, b));  
  
    return 0;  
}  
  
int add(int x, int y)  
{  
    return(x+y);  
}  
