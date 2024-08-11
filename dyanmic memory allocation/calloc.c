//
// Created by CHAMILKA MIHIRAJ on 8/1/2024.
//

#include <stdio.h>
#include <stdlib.h>
#define array_size 5

int main() {
    int *ptr = (int*) calloc(array_size , sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated\n");
        exit(1);
    } else {
        for (int i = 0; i < array_size; i++) {
            *(ptr + i) = i;
        }
    }

    for (int i = 0; i < array_size; i++) {
        printf("%d ", *(ptr+ i));
    }

    free(ptr);
    return 0;
}