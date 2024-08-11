//
// Created by CHAMILKA MIHIRAJ on 8/7/2024.
// Question - 04 (C)

#include <stdio.h>
#include <stdlib.h>

int getInt(char *);
int getAvg(const int *,const int);

int main() {
    const int stdCount = getInt("Enter No of Student:");

    int * ptr = (int *) malloc(stdCount * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated!");
        exit(1);
    }

    printf("Enter Marks:");
    for (int i = 0; i < stdCount; i++) {
        ptr[i] = getInt("");
    }

    printf("Average is %d", getAvg(ptr, stdCount));

    free(ptr);
    return 0;
}

int getInt(char * data) {
    int value;
    printf("%s", data);
    scanf("%d", &value);
    return value;
}

int getAvg(const int * Rptr,const int count) {
    int avg, tot = 0;
    for (int i = 0; i < count; i++) {
        tot += Rptr[i];
    }
    return tot/count;
}