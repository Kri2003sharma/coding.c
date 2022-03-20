#include <stdio.h>
#include <conio.h>
int main()
{
	printf("krishna sharma \n");
    int i,sum,max,min,avg,size;
   
    printf("ENter array length : \n");
    scanf("%d",&size);
    
    int ara[size];
    
     printf("Enter array elements:\n");
     for(i = 0; i < size;  i++){
        scanf("%d", &ara[i]);
     }
    
    sum=0;
    max=ara[0];
    min=ara[0];
    for(i = 0; i < size; i++){
        printf("Your array elements are %d\n",ara[i]);
        sum+=ara[i];
        if(ara[i] > max){
            max = ara[i];
        }
        if(ara[i] < min){
            min = ara[i];
        }
    }
    avg=sum/size;
    
    printf("Sum is %d\n",sum);
    printf("Average is %d\n",avg);
    printf("Max number is %d\n",max);
    printf("Min number is %d\n",min);
     
    return 0;
}
