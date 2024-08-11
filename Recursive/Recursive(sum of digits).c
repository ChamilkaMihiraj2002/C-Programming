//
// Created by CHAMILKA MIHIRAJ on 8/1/2024.
//

#include <stdio.h>

int SumOfDigits(int);

int main() {
    int number;
    printf("Enter number : ");
    scanf("%d", &number);
    printf("Sum of Digits : %d", SumOfDigits(number));
    return 0;
}

int SumOfDigits(int value) {
    if(value == 1) {
        return 1;
    } else {
        return value + SumOfDigits(value - 1);
    }
}