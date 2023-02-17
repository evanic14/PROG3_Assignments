#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

bool isInt(const char str[]);

int main(int argc, char* argv[])
{
    int i;
    int converted;
    int total = 0;

    printf("argc = %d\n\n", argc);

    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);

        if (isInt(argv[i]) == true)
        {
            converted = atoi(argv[i]);
            total = total + converted;
        }
        else
        {
            // do nothing
        }
    }
    printf("total = %d\n", total);

   return 0;
}

bool isInt(const char str[])
{
   int i = 0;
   bool isInteger = true;
   while (str[i] != '\0')
   {
      if (!isdigit(str[i]))
      {
         isInteger = false;
         break;
      }
      i++;
   }
   return isInteger;
}
