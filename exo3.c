#include <stdio.h>

int main(){
    int arr[5], sum = 0;
    float avg;
    printf("Enter 5 integer: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5 ; i++){
        sum += arr[i];
    }
    avg = sum / 5.0;
    printf("sum : %d, average: %2.f\n", sum, avg);
    return 0;
}
//This code is an array consisting of 5 indexes .
// and print a sum of elements and average, average = (sum of elements / number of elements) .