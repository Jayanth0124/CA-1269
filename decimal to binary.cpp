#include <stdio.h>
void decimalToBinary(int n) {
    if (n > 0) {
        decimalToBinary(n / 2);
        printf("%d", n % 2);
    }
}
int main() {
    int decimalNum;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    printf("Binary representation: ");
    decimalToBinary(decimalNum);
    printf("\n");
    return 0;
}
