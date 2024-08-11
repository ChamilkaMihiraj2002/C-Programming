//
// Created by CHAMILKA MIHIRAJ on 8/8/2024.
// Question II (b-II)

#include <stdio.h>
int fibonachi(int, int, int, int);

int main() {
    int  n;
    printf("Enter n:");
    scanf("%d", &n);

    fibonachi(n, 1, 0, 0);
    return 0;
}

int fibonachi(int loop, int n, int t, int n1) {
    if (loop == 0) {
        return 0;
    } else {
        printf("%d ", n1);
        t = n1;
        n1 = n;
        n = n + t;
        return fibonachi(loop-1, n , t, n1);
    }
}