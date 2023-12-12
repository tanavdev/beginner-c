#include <stdio.h>

void fibonacci_nr(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int fibonacci_r(int n) {
    if (n <= 1)
        return n;
    return fibonacci_r(n - 1) + fibonacci_r(n - 2);
}

// Function to print Fibonacci series up to n terms using recursion
void printFibonacci_r(int n) {
    printf("Fibonacci Series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci_r(i));
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &terms);

    printFibonacci_r(terms);

    return 0;
}
