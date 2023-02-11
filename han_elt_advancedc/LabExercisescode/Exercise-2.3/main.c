#include <stdio.h>

#define DATA_SIZE 4

void averageDdata(double data[], int size);

double avg = 0;

int main(void)
{
   int i = 0;
   double sensorData[DATA_SIZE] = {1.0, 2.0, 3.0, 4.0};

   averageDdata(sensorData, DATA_SIZE);

   printf("Original values:\n");
   for (i = 0; i < DATA_SIZE; i++)
   {
      printf("%d: %.2lf, \n", i, sensorData[i]);
   }
   puts("");
   printf("Avarage: %.2lf \n", avg);

   return 0;
}

void averageDdata(double data[], int size)
{
    double data0 = 0;
    double data1 = 0;
    double data2 = 0;
    double data3 = 0;

    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            data0 = data[i];
        }
        else if (i == 1)
        {
            data1 = data[i];
        }
        else if (i == 2)
        {
            data2 = data[i];
        }
        else if (i == 3)
        {
            data3 = data[i];
        }
        else
        {
            printf("error");
        }
    }
    avg = (double) (data0 + data1 + data2 + data3) / size;
}

