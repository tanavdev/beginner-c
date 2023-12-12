#include <stdio.h>

struct Student
{
    int sno;
    char *name[20];
    int marks;
};


void main() {
    struct Student s1;

    s1.name[20] = "Tanav";
    s1.sno = 32;
    s1.marks = 43;

    printf("marks scored by %s is %d", s1.name, s1.marks);
}