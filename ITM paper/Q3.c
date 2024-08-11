//
// Created by CHAMILKA MIHIRAJ on 8/7/2024.
// Question - 04 (C - III)

#include <stdio.h>
#include <stdlib.h>
#define newstudent 10

int getInt(char *);
int getAvg(const int *,const int);
int getMarks(const int,const int, int *);

int main() {
    const int stdCount = getInt("Enter No of Student:");

    int * ptr = (int *) malloc(stdCount * sizeof(int)); // Dyanamic memory allocation

    if (ptr == NULL) {
        printf("Memory not allocated!");
        exit(1);
    }

    printf("Enter Marks:");
    getMarks(0, stdCount, ptr);

    printf("Average is %d\n\n", getAvg(ptr, stdCount));

    ptr = (int *) realloc(ptr , newstudent * sizeof(int)); // reallocate the new memory

    if (ptr == NULL) {
        printf("Memory not allocated!");
        exit(1);
    }

    printf("Enter Marks:");
    getMarks(stdCount, stdCount + newstudent , ptr);

    printf("Average is %d", getAvg(ptr, newstudent + stdCount));

    free(ptr);
    return 0;
}

int getInt(char * data) {
    int value;
    printf("%s", data);
    scanf("%d", &value);
    return value;
}

int getMarks(const int startPoint,const int endPoint, int * Rptr) {
    for (int i = startPoint; i < endPoint; i++) {
        Rptr[i] = getInt("");
    }
    return 0;
}

int getAvg(const int * Rptr,const int count) {
    int tot = 0;
    for (int i = 0; i < count; i++) {
        tot += Rptr[i];
    }
    return count > 0 ? tot/count : 0;
}