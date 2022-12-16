# include<stdio.h>
void swap (int a , int b);
void _swap (int *a , int *b);

int main() {
    int x = 3;
    int y = 9;
    _swap (&x,&y);
    printf("x is %d, y is %d", x , y);
    return 0;
}
// call by value 
void swap (int a , int b) {
    int t = b;
    b = a ;
    a = t ;
    printf("x is %d, y is %d \n", a , b);
}
// call by reference 
void _swap (int *a , int *b) {
    int t = *a ;
    *a = *b ; 
    *b = t ;
    printf("x is %d, y is %d \n", *a , *b);
}