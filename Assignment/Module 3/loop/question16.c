//calculate the sum of natural numbers using while loop.
#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter number upto which sum is required: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("\nThe sum of natural numbers up to %d is %d\n", n, sum);

}