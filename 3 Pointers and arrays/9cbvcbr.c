# include<stdio.h>
void printadress (int a );
void _printadress (int *a );
int main () {
    int x = 4;
    printadress(x);
    printf("adress is %u \n", &x);
    _printadress(&x);
    printf("adress is %u \n",&x);
    return 0 ;
}
// call by value 
void printadress (int a ) {
    printf("adress is %u \n",&a);
}
//call by reference using pointers
void _printadress (int *a ) {
    printf("adress is %u \n", a);
}