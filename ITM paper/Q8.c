//
// Created by CHAMILKA MIHIRAJ on 8/8/2024.
// Question III (b)

#include <stdio.h>
#include <stdlib.h>

#define count 5

struct visitors {
    int NIC;
} person[count];

void getNic(int *, int);
void checkVisit();

int main() {
    int i;
    for (i = 0; i < count; i++) {
        getNic(&person[i].NIC, i);
    }

    printf("\n<--- Same person visits multiple time --->\n");
    checkVisit();
    printf("\n");


    return 0;
}

void getNic(int * ptr,const int Number) {
    printf("Enter NIC %d :", Number);
    scanf("%d", ptr);
}

void checkVisit() {
    int countCheck = 0;
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++) {
            if (person[i].NIC == person[j].NIC) {
                countCheck++;
            }
        }
        if (countCheck > 1) {
            printf("%d\n", person[i].NIC);
        }
        countCheck = 0;
    }
}