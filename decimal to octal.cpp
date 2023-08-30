#include <stdio.h>
void decimalToOctal(int n) {
    if (n > 0) {
        decimalToOctal(n / 8);
        printf("%d", n % 8);
    }
}
int main() {
    int decimalNum;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    printf("Octal representation: ");
    decimalToOctal(decimalNum);
    printf("\n");
  return 0;
}
