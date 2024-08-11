#include <stdio.h>
#include <string.h>

int getlenght(char []);
int summation(int, int);

int main() {
    int number, length , summation_ = 0;
    char data[20],rev[20];

    printf("Enter Sring : ");
    scanf("%s", &data);
    printf("Enter number: ");
    scanf("%d", &number);

    length = getlenght(data);
    summation_ = summation(number ,summation_);
    
    for (int i = 0, j = (length-1); i <= (length-1) ; i++,j--)
    {
        char temp =  data[j];
        rev[i] = temp;
    }
    rev[length] = '\0';
    
    strcat(rev,data);

    printf("Dump Password: %s%d",rev,summation_);
    return 0;
}

int getlenght(char string_data[]) {
    return strlen(string_data);
}

int summation(int number,int total) {
    if(number == 0) {
        return total;
    } else {
        summation(number-=1,total+=number);
    }
}
