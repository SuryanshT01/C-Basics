# include<stdio.h>

int main () {
    int n;
    do {
        printf("enter a number");
        scanf("%d",&n); 
        if (n%11 == 0) {
            break; 
        } 
        
    } while (1);
    printf("its a multiple of eleven");
    return 0 ;
} 
