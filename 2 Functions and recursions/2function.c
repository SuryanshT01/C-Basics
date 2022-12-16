# include<stdio.h>

int sum (int a , int b);

int main(){
    int a,b;
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);
    int s = sum (a ,b);//()  is arguement or actual parameter 
    printf("%d",s);

    return 0 ;
    }

int sum(int a,int b) { // () is called parameter or formal parameter
    return a+b;
}