#include <stdio.h>

int isPalindrome(int number) {
    int originalNumber = number;
    int reverse = 0;

    while (number > 0) {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }

    if (originalNumber == reverse) {
        return 1; // It is a palindrome
    } else {
        return 0; // It is not a palindrome
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
