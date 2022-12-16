# include<stdio.h>

int sum (int n);

int main () {
    printf("enter a number whose sum you want : ");
    int x ;
    scanf("%d", &x);
    printf("%d", sum(x));
    return 0;
}

int sum (int n) {
    if (n == 1) {
        return 1;
    }
    int sumNm1 = sum(n-1); // sum of 1 to n-1 AND WE ARE CALLING THE FUNCTION AGAIN FOR N-1
    int sumN = sumNm1 + n ;
    return sumN ;
}