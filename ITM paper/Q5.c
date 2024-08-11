//
// Created by CHAMILKA MIHIRAJ on 8/8/2024.
// Question II (b-I)

#include <stdio.h>

int main() {
    int  n, number = 1, temp = 0 , n1 = 0;
    printf("Enter n:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", n1);
        temp = n1;
        n1 = number;
        number = temp + number;
    }
    return 0;
}
