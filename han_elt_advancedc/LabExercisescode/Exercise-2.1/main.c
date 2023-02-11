#include <stdio.h>
#include <stdlib.h>

// function prototypes
void hexdumpLong(long data);

int main(void)
{
    // variables
    long data1 = 255;

    // print data1's value in hex
    hexdumpLong(data1);

    return 0;
}

void hexdumpLong(long data)
{
    const unsigned char *pData = (const unsigned char *)&data;

    printf("%ld = ", data);
    for (size_t i = 0; i < sizeof(long); i++) // for loop, this loop has the size of value data
    {
        printf("%02x ", pData[i]); // printing hex values of value data
    }
    printf("\n");
}
