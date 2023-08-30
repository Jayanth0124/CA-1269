#include <stdio.h>
int main() {
    int octal, binary = 0, place = 1;
    printf("Enter an octal number: ");
    scanf("%o", &octal);

    while (octal > 0) {
        binary += (octal % 10) * place;
        octal /= 10;
        place *= 1000;
    }
    printf("Binary representation: %d", binary);
    return 0;
}
