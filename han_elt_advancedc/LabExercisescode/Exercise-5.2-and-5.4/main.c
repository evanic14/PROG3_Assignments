#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
   int count;
   char *pText; /* must point to dynamic allocated memory! */
} problem_t;

int deepCopy(problem_t *pDestination, const problem_t *pSource);

int main(void)
{
   problem_t s1 = {1, NULL}; /* do not do ... = {1, "ABC"} */
   problem_t s2 = {2, NULL};

   s1.pText = (char *)malloc(4 * sizeof(char)); /* array of 4 chars */
   if (s1.pText != NULL)
   {
      strcpy(s1.pText, "111");
      s2 = s1;           /* shallow copy, problem? */
      s2.pText[0] = 'A'; /* problem? */

      printf("s1 = %d %s\n", s1.count, s1.pText);
      printf("s2 = %d %s\n", s2.count, s2.pText);

      free(s1.pText); /* problem? */
   }
   s2.pText[1] = 'B'; /* problem? */

   printf("s1 = %d %s\n", s1.count, s1.pText);
   printf("s2 = %d %s\n", s2.count, s2.pText);

   return 0;
}

int deepCopy(problem_t *pDestination, const problem_t *pSource)
{
   /* TODO implementation, update main() code,
    * call this function in main() to avoid the problems of
    * a shallow copy.
    */
    free(&pDestination);

    char *pDestination = (char *)malloc(sizeof(char)+1);


    /*• free the allocated memory pointed by the pointer in ∗pDestination (for prevent-
    ing memory leakage).
    • do a shallow copy: *pDestination = *pSource;
    • determine the size of the allocated memory pointed by the string pointer in
    ∗pSource (string length + 1).
    • allocate dynamic memory with the determined size and overwrite the string
    pointer in ∗pDestination with the value returned by malloc().
    • copy the string pointed by the string pointer in ∗pSource to the location pointed
    to by the string pointer in ∗pDestination.*/

   /* TODO should return an error code if memory allocation fails */
   return 0;
}
