#include <stdio.h>
#include <stdlib.h>

#define voidData 1215514655113565132
#define D1 565513
#define D2 465546

void hexdumpLong(long data);
void average2D(double *pD1, double *pD2);

int main(void)
{
   hexdumpLong(voidData);
   return 0;
}

void hexdumpLong(long data)
{
    printf("%ld", data);
}

void average2D(double *pD1, double *pD2)
{

}
