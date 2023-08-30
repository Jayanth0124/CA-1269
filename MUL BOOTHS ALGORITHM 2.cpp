#include <stdio.h>
int main() {
    int num1, num2, result = 0;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    for (int i = 0; i < num2; i++) {
        result += num1;
    }
    printf("Result of multiplication: %d\n", result);
    return 0;
}
