#include <stdio.h>

int main() {
    FILE *fp;
    char filename[] = "numbers.txt";
    int num;
    int sum = 0, count = 0;
    float average;

    // Open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open %s\n", filename);
        return 1;
    }

    // Read integers from file until EOF
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in the file.\n");
        return 0;
    }

    average = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
