#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    char ch;

    while (1) {   //while loop
      printf("\nInput two integers: ");
      scanf("%d%d", &a, &b);
      getchar(); //inputting one character to th screen

      c = a + b;

      printf("(%d) + (%d) = (%d)\n", a, b, c);

      printf("\nDo you wish to add more numbers (y/n): ");
      scanf("%c", &ch);

      if (ch == 'y' || ch == 'Y')
         continue;
      else
          break;
          }

   return 0;
}
