#include <stdio.h>

int facto_nr(int n){
    int ans = n;

    for (int i = n-1; i > 0; i--)
    {
        ans = ans * i;
    }
    
    return ans;
}

int facto_r(int n){
    if (n==0) {
        return 1;
    } else {
        return(n*facto_r(n-1));
    }
}

int facto_wh(int n){
    int fact = 1;
    while (n > 1) {
        fact *= n;
        n--;
    }
    return fact;
}

void main(){
    int n = 5;

    printf("%d", facto_r(5));
}