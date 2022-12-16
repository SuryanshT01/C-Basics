#include<stdio.h>
#include<math.h>

void main() {
    int a,b;

    printf("enter lower limit");
    scanf("%d",&a);

    printf("enter upper limit");
    scanf("%d",&b);

    for(int i = a ; i<=b;i++){
        if(pow(i,0.5)==(int)(pow(i,0.5))){
            printf("%d \n",i);
        }
    }
    
    }