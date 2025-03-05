/* float to binary conversion using union.
we know that unions share the exact same memory location.
when we assign a float value to (value.f=5.4), then the 4 bytes of the memory filled with the binary representation of the float according to the IEEE-754 format.
accessing (value.i)(unsigned int i) simply interprets those exact same 4 bytes as an unsigned int. it doesn't perform any typecasting. it just reads the bits as if they were integer.
*/

#include <stdio.h>

union FloatToBinary {
    float f;        
    unsigned int i; 
};

void printBinary(unsigned int n) {
    for (int i = 31; i >= 0; i--)
    {
        // Print each bit (from MSB to LSB)
        printf("%d", (n >> i) & 1);
        if (i % 4 == 0) 
	{
            printf(" "); 
	}
    }
    printf("\n");
}

int main()
{
    union FloatToBinary value;
    value.f = 5.4;
    printf("Float: %f\n", value.f);
    printf("Binary representation: ");
    printBinary(value.i);

    return 0;
}

