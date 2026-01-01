#include <stdio.h>

int addFunc(int first_number, int second_number) {
    return first_number + second_number;
}

int subFunc(int first_number, int second_number) {
    return first_number - second_number;
}

int multiplyFunc(int first_number, int second_number) {
    return first_number * second_number;
}

float divideFunc(int first_number, int second_number) {
    return (float)first_number / second_number;
}

int main(void) {
    int sum = addFunc(20, 110);
    int sub = subFunc(20, 110);
    int multi = multiplyFunc(20, 110);
    float div = divideFunc(100, 1000);
    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", multi);
    printf("Division: %.2f\n", div);
    return 0;
}