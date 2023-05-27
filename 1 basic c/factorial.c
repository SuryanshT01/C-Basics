#include<stdio.h>
int main() {
    int number;
    int fact = 1;
    printf("Enter the number whose factorial you want : \n");
    scanf("%d",&number);
    for(int i=number;i>=1;i--) {
        fact = fact * i;
        
    }
    printf("Factorial of %d is %d",number,fact);
    return 0;
}