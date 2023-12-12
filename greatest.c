#include <stdio.h>

void main() {
    int a = 8;
    int b = 2;
    int c = 6;

    if (a>b) {
        if (a>c) {
            printf("a is greatest");
        } else {
            printf("c is greatest");
        }
    } else {
        if (b>c) {
            printf("b is greatest");
        } else {
            printf("c is greatest");
        }
    }
}