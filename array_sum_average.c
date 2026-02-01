#include <stdio.h>
int main() {
    int n;
    float sum = 0, avg;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("Sum = %.2f, Average = %.2f", sum, avg);
    return 0;
}
