#include<stdio.h>
int main(){
    char str[10],revstr[10];
    printf("ENTER A STRING:");
    gets(str);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='\0'){
            count++;
        }
    }
    int j=count-1;
    for(int i=0;i<count;i++){
        if(j<0){
            break;
        }
       revstr[j]=str[i];
       j--; 
    }
    revstr[count]='\0';
    printf("%s",revstr);
    return 0;
}