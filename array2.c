#include <stdio.h>

int main() {
    int n, i;
    int elements[10];
    int sum = 0;
    long long product = 1;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &elements[i]);
    }

    for(i = 0; i < n; i++) {
        sum += elements[i];
        product *= elements[i];
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Product = %lld\n", product);
    printf("Average = %.2f\n", average);

    return 0;
}
