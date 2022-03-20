#include<stdio.h>
#include<conio.h>

void main ()
{
	printf("krishna sharma \n");

    int matrix [3][4] = { {1, 2, 3, 4},
                           {5, 6, 7, 8},
                           {9, 10, 11, 12}
                         };
    
    
    int row, column=0;

    for (row=0; row<3; row++)
     {
        for(column=0; column<4; column++)
            {printf("%d     ", matrix[row][column]);}
            printf("\n");
     }
    
    getch();
}
