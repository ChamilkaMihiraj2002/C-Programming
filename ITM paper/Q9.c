//
// Created by CHAMILKA MIHIRAJ on 8/8/2024.
// Question III (C)

#include <stdio.h>
#include <stdlib.h>

#define count 5

struct visitors {
    int NIC;
} person[count];

void getNic(int *, int);
void vistList();

int main() {
    int i;
    for (i = 0; i < count; i++) {
        getNic(&person[i].NIC, i);
    }

    vistList();
    return 0;
}

void getNic(int * ptr,const int Number) {
    printf("Enter NIC %d :", Number);
    scanf("%d", ptr);
}

void vistList() {
    for (int i = count-1; i >= 0; i--) {
        printf("%d \n", person[i].NIC);
    }
}