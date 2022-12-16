# include<stdio.h>
void dowork (int a ,int b,int *sum,int *prod,int *avg);

int main () {
    int a = 4 , b = 8;
    int sum ,prod , avg ;
    dowork(a,b, &sum,&prod,&avg);
    printf("sum is %d\nprod is %d\navg is %d\n",sum,prod ,avg);
}
//pointers is used to give multiple results from a single function
void dowork (int a ,int b ,int *sum ,int *prod,int *avg) {
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}