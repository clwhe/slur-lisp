/* clwhe */

#include <stdio.h>

char* READ(char prompt[]);  /* read in a line */
char* EVAL(char *ast, void *env);  /* "stub" returns first arg */
char* PRINT(char *exp);  /* print given string and return it */

void rep();  /* calls READ, EVAL, PRINT functions */

int main()
{
  while (1 == 1)
    rep();
  /* implement program exit */
  return (0);
}
