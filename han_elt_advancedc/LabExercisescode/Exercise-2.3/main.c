#include <stdio.h>

#define DATA_SIZE 4

double averageDdata(double data[], int size);

int main(void)
{
   int i = 0;
   double sensorData[DATA_SIZE] = {1.0, 2.0, 3.0, 4.0};

   averageDdata(sensorData, DATA_SIZE);

   printf("Original values:\n");
   for (i = 0; i < DATA_SIZE; i++)
   {
      printf("%d: %.2lf \n", i, sensorData[i]);
   }
   puts("");
   printf("Avarage: %.2lf \n", averageDdata(sensorData, DATA_SIZE));

   return 0;
}

double averageDdata(double data[], int size)
{
   double data0 = 0;
   double avg;

    for (int i = 0; i < size; i++)
    {
        data0 = data0 + data[i];

    }
    avg = data0 / size;

    for (int i = 0; i < size; i++)
    {
        data[i] = avg;
    }

    return avg;
}

