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

