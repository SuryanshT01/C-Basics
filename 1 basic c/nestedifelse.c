# include<stdio.h>

int main() {
    int x ;
    printf("enter a number : ");
    scanf("%d", &x);
    if (x>=0) {
        printf("it is a positive number \n");
        if(x%2==0) {
            printf("and it is an even number");
        } else {
            printf("and it is a odd number");
        }
    } else {
        printf("it is a negative number \n");
        if(x%2==0) {
            printf("and it is an even number \n");
        } else {
            printf("and it is a odd number");
        }
    }
    
    return 0;
} 