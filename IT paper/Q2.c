#include <stdio.h>
#include <math.h>

#define deposit 10000
#define need_amount 8000

void time_of_collection(double);
void monthly_interest(double);

int main() {

    const double rate = 0.2;
    const double monthly_rate = 0.015;
    time_of_collection(rate);
    monthly_interest(monthly_rate);

    return 0;
}

void time_of_collection(double rate) {
    double interest = deposit * rate;
    printf("Must wait %0.0lf years to collect the %d.\n",ceil(need_amount/interest),need_amount);
}

void monthly_interest(double rate) {
    double balance  = deposit;
    double interest;
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            interest = deposit * rate;
            balance += interest;
            printf("Monthly Balance Rs. %0.2lf\n", balance);
        }
        printf("--- %d year over ---\n", i+1);
    }
    
}