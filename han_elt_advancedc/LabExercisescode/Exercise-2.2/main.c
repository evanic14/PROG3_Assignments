#include <stdio.h>
// function prototype
void average2D(double *pD1, double *pD2);
// global variable
double avg = 0;

int main(void)
{
    double d1 = 2.0;
    double d2 = 3.0;

    // print value d1 and d2, call function to calculate average
    printf ("d1 = %lf d2 = %lf\n", d1 , d2);
    // adding d1 and d2 to function
    average2D (&d1 , &d2);
    // printing average value
    printf ("avg = %lf \n", avg);

    return 0;
}

void average2D(double *pD1, double *pD2)
{
    avg = (double) (*pD1 + *pD2) / 2; // calculating average value
}
