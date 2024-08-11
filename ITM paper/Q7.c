//
// Created by CHAMILKA MIHIRAJ on 8/8/2024.
// Question III (a)

#include <stdio.h>
#include <stdlib.h>

#define count 1

struct visitors {
    int NIC;
} person[count];

void getNic(int *, int);

int main() {
    for (int i = 0; i < count; i++) {
        getNic(&person[i].NIC, i);
    }

    return 0;
}

void getNic(int * ptr,const int Number) {
    printf("Enter NIC %d :", Number);
    scanf("%d", ptr);
}