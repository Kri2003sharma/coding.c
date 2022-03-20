#include <stdio.h>
#include <conio.h>

int main()
{
   int size;//array size
printf("Enter the value of arr size ");
scanf("%d",&size);//input array size
int arr [size];
for(int i=0;i<size;i++)
{
printf("Enter array value\t");
scanf("%d",&arr[i]);//input array value 
}
for(int i=0;i<size;i++){//output array value
printf("Value of array is %d \n",arr[i]);
}

    return 0;
}
