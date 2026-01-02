#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int total = 0;
    int highest = atoi(argv[1]);

    for (int i = 1; i < argc; i++) {
        int g = atoi(argv[i]);
        total += g;
        if (g > highest) {
            highest = g;
        }
    }

    float avg = (float)total / (argc - 1);
    printf("Highest Grade: %d\n", highest);
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", avg);
    return 0;
}