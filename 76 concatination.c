

#include <stdio.h>
#include <conio.h>
void  main() 
{
	printf("krishna sharma \n");
  char s1[100] = "hello ", s2[] = "sweet world";
  int length, j;

  
  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }

  
  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }
  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);

getch();
}
