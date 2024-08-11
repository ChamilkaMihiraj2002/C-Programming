#include <stdio.h>
#define default_year 2024
#define person_count 1000
#pragma(1)

struct person
{
    char name[20];
    char nationality[10];
    char nic[12];
    int year;
    int month;
    int day;
}citizen[person_count];

struct vote {
    int vote_count;
}total_votes[6];

char candidates[6][20] = {"Jhone Smith", "Nick Sussan", "James Carter", "Anjelo Martin", "Jolly Deona","Darwain Cameron"};

void display(struct person *);
int checkEligibility(struct person *);
void voting();
void calculate_vote(int, int);
void display_total_votes();

int main() {

    for (int i = 0; i < person_count; i++)
    {
        printf("Enter Your details :\n");

        printf("Name: ");
        scanf(" %[^\n]c", &citizen[i].name);
        printf("NIC number: ");
        scanf("%s",&citizen[i].nic);
        printf("Date Of Birth (YYYY MM DD): ");
        scanf("%d %d %d", &citizen[i].year, &citizen[i].month, &citizen[i].day);
        printf("Nationality: ");
        scanf(" %[^\n]c", &citizen[i].nationality);

        display(&citizen[i]);
        if(checkEligibility(&citizen[i])) {
            printf("--You are eligibile to vote--\n\n");
            voting();
        } else {
            printf("--You are not eligibile to vote--\n\n");
        }
        printf("\n");
    }
    display_total_votes();

    return 0;
}

void display(struct person * ptr) {
    printf("\nInformation of Citizen\n");
    printf("Name: %s | NIC: %s | Nationality: %s | Date of Birth: %d/%d/%d\n",ptr->name,ptr->nic,ptr->nationality,ptr->year,ptr->month,ptr->day);
}

int checkEligibility(struct person * ptr) {
    int p_year = default_year - ptr->year;
    return (p_year >= 18)? 1 : 0;
}

void voting() {
    int party;
    printf("Select Your Political party Labour Party - [1] | Conservative Party - [2] | Liberal Democrats - [3] :");
    scanf("%d", &party);

    switch (party)
    {
        case 1:
            calculate_vote(0,2);
            break;
            
        case 2:
            calculate_vote(2,4);
            break;

        case 3:
            calculate_vote(4,6);
            break;

        default:
            break;
    }
}

void calculate_vote(int start, int end) {
    int index;
    printf("-----------------------------------------------------------\n");
    for (int i = start; i < end; i++)
    {
        printf("Candidate name: %s  ID : %d\n", candidates[i],i+1);
    }
    printf("-----------------------------------------------------------\n");
    printf("\nGive your vote using Candidate ID :");
    scanf("%d", &index);

    total_votes[index-1].vote_count += 1;
    
}

void display_total_votes() {
    printf("\n-----TOTAL VOTE REPORT-----\n\n");
    printf("Name\tTotal Votes\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%s\t\t\t%d\n",candidates[i],total_votes[i].vote_count);
    }
    printf("------------------------------\n");
}