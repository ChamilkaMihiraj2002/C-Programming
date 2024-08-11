//
// Created by CHAMILKA MIHIRAJ on 8/1/2024.
//

#include <stdio.h>

int input(char *);
int power(int,int);

int main() {
    int base = input("base"), expo = input("exponet");

    printf("Sum of Digits : %d", power(base, expo));
    return 0;
}

int input(char * data) {
    int value;
    printf("Enter %s : ", data);
    scanf("%d", &value);
    return value;
}

int power(int base_value, int exponet_value) {
    if (exponet_value == 0) {
        return 1;
    } else {
        return base_value * power(base_value, exponet_value - 1);
    }
}