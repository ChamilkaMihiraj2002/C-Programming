//
// Created by CHAMILKA MIHIRAJ on 8/1/2024.
//

#include <stdio.h>

int factorial(int);

int main() {
    int number;
    printf("Enter numbr :");
    scanf("%d", &number);

    printf("factorial is : %d", factorial(number));
    return 0;
}

int factorial(int value) {
    if(value == 1) {
        return 1;
    } else {
        return value * factorial(value - 1);
    }
}