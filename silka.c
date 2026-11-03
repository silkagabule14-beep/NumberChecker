#include <stdio.h>
int main(){
    // check if a number is even or odd
    int number; 
    printf("Enter any Number: ");
    scanf("%d", &number);
    if(number % 2 == 0){
        printf("%dEven Number.", number);
    } else {
        printf("%d odd number.", number);
    }
    return 0;
}