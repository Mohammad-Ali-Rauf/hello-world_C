#include <stdio.h>

int add(int first_number, int second_number) {
    printf("Addition of both numbers is %d\n", first_number + second_number);
    return 0;
}

int sub(int first_number, int second_number) {
    printf("Subtraction of both numbers is %d\n", first_number - second_number);
    return 0;
}

int multiply(int first_number, int second_number) {
    printf("Multiplication of both numbers is %d\n", first_number * second_number);
    return 0;
}

int divide(int first_number, int second_number) {
    printf("Division of both numbers is %d\n", first_number % second_number);
    return 0;
}

int main() {
    add(20, 110);
    sub(20, 110);
    multiply(20, 110);
    divide(20, 110);
    return 0;
}