#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * link;
};

void add_to_end(struct node *, int);
void print_data(struct node *);
void count_of_node(struct node *);

int main() {
    struct node * head = (struct node *) malloc(sizeof(struct node));
    head->data = 5;
    head->link = NULL;

    struct node * current = (struct node *) malloc(sizeof(struct node));
    current->data = 10;
    current->link = NULL;

    head->link = current;

    current = (struct node *) malloc(sizeof(struct node));
    current->data = 20;
    current->link = NULL;

    head->link->link = current;

    print_data(head);
    count_of_node(head);

    add_to_end(head, 55);

    print_data(head);
    count_of_node(head);

    add_to_end(head, 72);

    print_data(head);
    count_of_node(head);
    return 0;
}

void add_to_end(struct node * head, int data) {
    if (head == NULL)
        printf("Linked List is empty!");
    
    struct node *ptr = NULL, *temp;
    ptr = head;

    temp = (struct node *) malloc (sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }

    ptr->link = temp;
}

void print_data(struct node * head) {
    if (head == NULL)
        printf("Linked List is empty!");
    
    struct node * ptr = NULL;
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
        printf("Linked List is empty!");

    struct node * ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }

    printf("\nTotal nodes : %d\n", count);
}