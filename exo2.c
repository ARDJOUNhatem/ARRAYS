#include <stdio.h>

int main(){
    int arr[5], largest, smallest;
    printf("enter 5  integers: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    largest = smallest = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] > largest) largest = arr[i];
        if(arr[i] < smallest) smallest = arr[i];
    }
    printf("largest: %d,smallest: %d\n", largest, smallest);
    return 0;
}
//This code is an array consisting of 5 indexes .
 //The user enters the 5 values ​​and then the large one and small printed.