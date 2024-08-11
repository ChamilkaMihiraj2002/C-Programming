//
// Created by CHAMILKA MIHIRAJ on 8/8/2024.
// Question III (a)

#include <stdio.h>
#define start 1
#define end 3

int main() {
    for (int i = start; i <= end; i++) {
        for (int j = start; j <= end; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}
