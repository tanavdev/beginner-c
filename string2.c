#include <stdio.h>
#include <string.h>

void main() {
    char name[100];
    
    //scanf("%s", name);
    // string cant input multiword string
    // printf("Your full name is: %s", name);

    //gets(name); // dangerous
    fgets(name, 100, stdin);
    puts(name);

    // can also create string with pointers
    // and that string will be changable
    // char *name = "tanav poswal"


    //strlen()
    //strcat()
    //strcmp() compare length of string
}