#include <stdio.h>

int main(){
    int arr[5];
    printf("Enter 5 integers: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    printf("Array elements: ");
    for(int i = 0; i < 5; i++){
       printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
 //This code is an array consisting of 5 indexes .
 //The user enters the 5 values ​​and then the array elements are printed.