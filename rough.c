#include <stdio.h>

int rev(int num) {
    int reverse = 0;

    while (num>0)
    {
        int unit = num % 10;
        reverse = (reverse * 10) + unit;
        num /= 10;
    }

    return reverse;    
}

int sumofdig(int num) {
    int sum = 0;

    while (num>0)
    {
        int unit = num % 10;
        sum += unit;
        num /= 10;
    }

    return sum;
}

void main() {
    int a = 14627;

    printf("%d is reversed to %d and sum of digits is %d", a, rev(a), sumofdig(a));
}