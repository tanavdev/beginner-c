// write a function to reverse an array

#include <stdio.h>

int arr[5] = {1,2,3,4,5};

void main(){
    int len = 5;
    int mid = (len)/2;
    
    for (int i = 0; i < mid; i++)
    {
        int temp = arr[i];
        arr[i] = arr[len-i-1];
        arr[len-i-1] = temp;
    }
    
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    
}   