//
// Created by CHAMILKA MIHIRAJ on 8/4/2024.
//

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node * del_last(struct node *);

int main() {
    struct node * head = (struct node *) malloc (sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node * current = (struct node *) malloc (sizeof(struct node));
    current->data = 93;
    current->link = NULL;
    head->link = current;

    current = (struct node *) malloc (sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;

    struct node * ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

    head = del_last(head);
    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}

struct node * del_last(struct node * head) {
    if (head == NULL) {
        printf("List is already empty!");
    } else if (head->link == NULL) {
        free(head);
        head = NULL;
    } else {
        struct node * temp = head;
        struct node * temp2 = head;

        while (temp->link != NULL) {
            temp2 = temp;
            temp = temp->link;
        }
        temp2->link = NULL;
        free(temp);
        temp = NULL;
    }
    return head;
}