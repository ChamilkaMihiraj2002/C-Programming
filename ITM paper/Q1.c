//
// Created by CHAMILKA MIHIRAJ on 8/7/2024.
// Question - 04 (A)

#include <stdio.h>

struct student {
    char Index_number[7];
    char name[20];
    char gender[6];
    int Guardian_number;
};

char getString(char * , char *);
void display_info(struct student *);

int main() {
    struct student student_01;
    //Get student data
    getString(student_01.Index_number, "Index number");
    getString(student_01.name, "Name");
    getString(student_01.gender, "Gender(Male/Female)");

    printf("Enter Guardian Number :");
    scanf("%d", &student_01.Guardian_number);

    display_info(&student_01);
    return 0;
}

char getString(char * ptr, char * data) {
    printf("Enter %s :", data);
    scanf(" %[^\n]c", ptr);
    return 0;
}

void display_info(struct student * ptr) {
    printf("\n <-- Student Details --> \n");
    printf("Index number : %s  | Name : %s \n", ptr->Index_number, ptr->name);
    printf("Gender\t : %s  | Guardian Number : %d \n", ptr->gender, ptr->Guardian_number);
}