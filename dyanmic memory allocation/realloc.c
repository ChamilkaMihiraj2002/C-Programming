//
// Created by CHAMILKA MIHIRAJ on 8/1/2024.
//

#include <stdio.h>
#include <stdlib.h>
#define array_size 5

int dataAdd(int *, const int);
int dataPrint(const int *, const int);

int main() {
    int *ptr = (int*) malloc(array_size * sizeof(int));
    int limit = 0;

    if (ptr == NULL) {
        printf("Memory not allocated\n");
        exit(1);
    } else {
        dataAdd(ptr, limit);
    }

    dataPrint(ptr, limit);

    printf("\nHow many numbers add :");
    scanf("%d", &limit);

    ptr = (int*) realloc (ptr, limit *  sizeof(int));

    dataAdd(ptr,limit);
    dataPrint(ptr, limit);

    free(ptr);
    return 0;
}

int dataAdd(int * ptr , const int new_limit) {
    if (ptr == NULL) { printf("Memory not allocated\n");
        exit(1);
    }

    for (int i = 0; i < array_size + new_limit; i++) {
        *(ptr + i) = i;
    }

    return 0;
}

int dataPrint(const int * ptr, const int limit) {
    if (ptr == NULL) { printf("Memory not allocated\n");
        exit(1);
    }

    for (int i = 0; i < array_size + limit; i++) {
        printf("%d ", *(ptr+ i));
    }

    return 0;
}