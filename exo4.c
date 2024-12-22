#include <stdio.h>

int main() {
    int arr[5], temp;

    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5 / 2; i++) {
        temp = arr[i];
        arr[i] = arr[4 - i]; 
        arr[4 - i] = temp; 
    }

    printf("Reversed array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");

    return 0;
}
// This code is to enter the elements of an array consisting of 5 indexes then print reversed array.