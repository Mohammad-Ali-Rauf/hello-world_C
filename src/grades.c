#include <stdio.h>

int main(void)
{
    int grades[5] = {82, 85, 89, 92, 96};
    int n = sizeof(grades) / sizeof(grades[0]);
    int total = grades[0] + grades[1] + grades[2] + grades[3] + grades[4];
    float avg = (float)total / n;
    int highestGrade = grades[0];
    for (int i = 1; i < n; i++)
    {
        if (grades[i] > highestGrade)
        {
            highestGrade = grades[i];
        }
    }
    printf("Highest Grade: %d\n", highestGrade);
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", avg);
    return 0;
}