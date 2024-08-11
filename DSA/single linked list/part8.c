#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * link;
};

struct node * del_first(struct node *);

int main() {
    struct node * head = (struct node *) malloc (sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node * current = (struct node *) malloc (sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link= current;

    struct node * ptr = head;
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

    head = del_first(head);

    ptr = head;
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}

struct node * del_first(struct node * head) {
    if(head == NULL){
        printf("List is alread empty");
    } else {
        struct node * temp = head;
        head = head->link;
        free(temp);
    }
    return head;
}