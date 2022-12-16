# include<stdio.h>

int main () {
    int aadhar[5];
    int *ptr = aadhar;
    //input
    for (int i = 0 ; i<5;i++){
        printf("index no %d : ",i);
        scanf("%d",&aadhar[i]);
        ptr++;
    }
    //output
    for (int i=0;i<5;i++){
        printf("aadhar no %d : ",i+1);
        printf("%d\n",aadhar[i]);
        ptr++;
    }
}