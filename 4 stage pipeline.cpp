#include <stdio.h>
int main() {
    int num1, num2, op, res, ins;
    int counter = 2; 
    int performance_measure = 0;
    printf("Enter 1st value: "); scanf("%d", &num1);
    printf("Enter 2nd value: "); scanf("%d", &num2);
    printf("Enter option (1:Add, 2:Sub, 3:Mul, 4:Div): "); scanf("%d", &op);
    switch (op) {
        case 1: res = num1 + num2; counter++; break;
        case 2: res = num1 - num2; counter++; break;
        case 3: res = num1 * num2; counter++; break;
        case 4: if (num2 != 0) { res = num1 / num2; counter++; } else { printf("Denominator can't be zero"); } break;
        default: counter += 3; break;
    }
    printf("Enter no. of instructions: "); scanf("%d", &ins);
    performance_measure = ins / counter;
    printf("Performance Measure: %d\n", performance_measure);
    return 0;
}
