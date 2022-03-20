

#include <stdio.h>
#include <string.h>
void  main()
{
	printf("krishna sharma \n");
  char source[1000], destination[1000];

  printf("Input a string\n");
  gets(source);

  strcpy(destination, source);

  printf("Source string: %s\n", source);
  printf("Destination string: %s\n", destination);

  getch();
}
