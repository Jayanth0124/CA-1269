#include <stdio.h>
typedef struct {
    unsigned int sign : 1;
    unsigned int exponent : 8;
    unsigned int mantissa : 23;
} SinglePrecisionFloat;
int main() {
    SinglePrecisionFloat num;
    num.sign = 1;           
    num.exponent = 134;     
    num.mantissa = 500000;  
    printf("Sign: %u\n", num.sign);
    printf("Exponent: %u\n", num.exponent);
    printf("Mantissa: %u\n", num.mantissa);
    return 0;
}
