#include <stdio.h>

void main() {
    int a = 23;
    int b = 23;
    int *ptr = &a;
    int *ptr2 = &b;

    printf("a is %u \nb is %u \nptr is %u \n&a is %u \n*ptr is %u", a, b, ptr, &a, *ptr);

    //a is 23 
    //b is 23 
    //ptr is 6422292 
    //&a is 6422292 
    //*ptr is 23
}