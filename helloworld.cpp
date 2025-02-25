#include <stdio.h>

int main() {
    float a[100];
    int count = 0;
    float inp;
    int isRunning = 1;
    printf("Let's have some calculation with average numbers. \n Please input number: \n");
    printf("Type -1 if you want to stop\n");
    printf("Type -2 to remove the last entered number\n");

    while (isRunning) {
        printf("-->");
        if (scanf("%f", &inp) != 1) {
            printf("Error!!!\n");
            return 1;
        }

        if (inp == -2) {
            if (count > 0) {
                count--;
                printf("[Removed]\n");
            } else {
                printf("The list is empty, nothing to remove.\n");
            }
            continue;
        }

        if (inp == -1) {
            break;
        }
        a[count++] = inp;
    }
    printf("List of (a): [");
    for (int i = 0; i < count; i++) {
        printf("%.1f, ", a[i]);
    }
    printf("]\n");
    if (count > 0) {
        float sum = 0;
        for (int i = 0; i < count; i++) {
            sum += a[i];
        }
        float average = sum / count;
        printf("The average value of the list is: %f\n", average);
    } else {
        printf("The list is empty, no average value to calculate.\n");
    }
    return 0;
}
