#include <stdio.h>
int main() {
    int dividend, divisor, quotient = 0, remainder = 0;
    printf("Enter the Number: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    } 
    remainder = dividend;
    printf("Quotient   : %04d\n", quotient);
    printf("Remainder  : %05d\n", remainder);
    return 0;
}
