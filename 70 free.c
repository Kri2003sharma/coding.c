#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
	printf("krishna sharma \n");
   char *str;
  
   str = (char *) malloc(15);
   strcpy(str, "free");
   printf("String = %s,  Address = %u\n", str, str);
   str = (char *) realloc(str, 25);
   strcat(str, "_");
   printf("String = %s,  Address = %u\n", str, str);

   free(str);
   
   return 0;
}
