#include <stdio.h>
#include <string.h>

void salting(char arr[]);

void main() {
    char password[100];

    scanf("%s", password);

    salting(password);

}

void salting(char arr[]) {
    char newPassword[100];
    char salt[] = "tp123";

    strcpy(newPassword, arr);
    strcat(newPassword, salt);



}
