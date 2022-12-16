# include<stdio.h>


int main() {
    int age = 22 ;
    int class = 13;
    int *ptr = &age ;
    int *ptrr = &class;
    int **pptr = &ptr; 
    printf("adress of pointer is %u", *ptrr);
    printf("adress of pointer is %u", &pptr);
    printf("adress of pointer is %u", &age);
    printf("adress of pointer is %u", **pptr);
    return 0;   
}