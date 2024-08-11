#include <stdio.h>
#include <stdlib.h>
#define mainlistCount 5

struct node {
    int data;
    struct node * link;
};

void print(struct node *);
int input();

struct node * add_list(struct node *);
struct node * add_at_end(struct node * , int);
struct node * add_beg(struct node **, int);


int main() {
    struct node * head = malloc(sizeof(struct node));
    struct node *ptr = malloc(sizeof(struct node));
    head->data = 0;
    int selection;

    while (1)
    {
        
        printf("Enter List           [1]    |     Show list               [2]\n");
        printf("Enter element to end [3]    |     Enter element to beging [4]\n");
        printf("--------------------------------------------------------------\n");
        printf("Selection : ");
        scanf("%d", &selection);


        switch (selection)
        {
            case 1:
                ptr = add_list(head);
                break;
            
            case 2:
                print(head);
                break;
            
            case 3:
                ptr = add_at_end(ptr, input());
                break;
            
            case 4:
                add_beg(&head, input());
                break;

            default:
                break;
        }
    }
    return 0;
}

void print(struct node* head) {
    if (head == NULL)
        printf("Linked List Empty");

    struct node * ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}


struct node * add_list(struct node* head) {
    int data, i = 0;
    struct node * ptr = head;
    printf("Enter Number : ");

    while (i < mainlistCount)
    {
        scanf("%d", &data);
        if (head->data == 0)
        {
            head->data = data;
            head->link = NULL;
        } else {
            ptr = add_at_end(ptr, data);
        }
        i++;
    }

    return ptr;
}

struct node * add_at_end(struct node * ptr, int data) {
    struct node * temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}

struct node * add_beg(struct node ** head, int data) {
    struct node * ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;

    ptr->link = *head;
    *head = ptr;
}

int input() {
    int data;
    printf("Enter data :");
    scanf("%d", &data);
    return data;
}