#include <stdio.h>
int boothMultiplication(int num1, int num2) {
    int product = 0, negativeNum1 = -num1, accumulator = 0;
    for (int i = 0; i < 4; i++) { 
        int lastBit = num2 & 1;    
        if (lastBit == 1) {
            accumulator += num1;
            product += accumulator;
        } else if (lastBit == 0) {
            accumulator += negativeNum1;
            product += accumulator;
        }
        num2 >>= 1;  
        accumulator <<= 1; 
    }
    return product;
}
int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int result = boothMultiplication(num1, num2);
    printf("Result of multiplication: %d\n", result);
    return 0;
}
