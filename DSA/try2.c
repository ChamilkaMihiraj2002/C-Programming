#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * link;
};

void print(struct node *);
void count_of_node(struct node *);
void add_data_to_end(struct node *, int);


int main() {
    struct node * head = (struct node *) malloc(sizeof(struct node));
    head->data = 52;
    head->link = NULL;

    struct node *currnet = (struct node *) malloc(sizeof(struct node));
    currnet->data = 63;
    currnet->link = NULL;

    head->link = currnet;

    currnet = (struct node *) malloc(sizeof(struct node));
    currnet->data = 98;
    currnet->link = NULL;

    head->link->link = currnet;
    
    print(head);
    count_of_node(head);

    add_data_to_end(head, 200);

    print(head);
    count_of_node(head);
    return 0;
}

void print(struct node * head) {
    if (head == NULL)
        printf("Linked list is empty!");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

void count_of_node(struct node * head) {
    int count = 0;
    if (head == NULL)
        printf("Linked list is empty!");
    
    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf(" Count of nodes :%d\n\n", count);
}

void add_data_to_end(struct node * head, int data) {
    if (head == NULL)
        printf("Linked list is empty!");
    
    struct node *ptr = NULL, *temp;
    temp = (struct node *) malloc(sizeof(struct node));
    ptr = head;

    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;    
}
