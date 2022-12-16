# include<stdio.h>

int main() {
    int Marks ;
    printf(" Enter your marks : ");
    scanf("%d", &Marks );
    if(Marks>90 && Marks<=100) {
        printf("A+\n");
        printf("Outstanding \n");
    } else if(Marks>75 && Marks<90) {
        printf("A \n ");
        printf("Very Good \n ");
    } else if(Marks>60 && Marks<75) {
        printf("B \n ");
        printf("Good \n ");
    } else if(Marks>30 && Marks<60) {
        printf("C \n ");
        printf("Average \n ");
    } else if(Marks>0 && Marks<30) {
        printf("F \n ");
        printf("Failed \n ");
       } else if(Marks==0) {
        printf("Better luck next time \n");
        printf("Failed very badly, go study again \n ");
    }
    else {
        printf("Enter valid number! \n");
        
    }
    return 0;


}