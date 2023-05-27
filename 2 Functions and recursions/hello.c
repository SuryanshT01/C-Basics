#include<stdio.h>
#include<string.h>
void printstring(char arr[]);
int stringlength(char arr[]);

int main () {
    char name[30];
    printf("Enter your name : ");
    gets(name);
    printstring(name);
    printf("length of string is %d",stringlength(name));
    return 0;
}
void printstring(char arr[]) {
    for(int i = 0;arr[i] != '\0';i++) {
        printf("%c",arr[i]);
    }printf("\n");
}
int stringlength(char arr[]) {
    int count = 0;
    for(int i = 0;arr[i]!='\0';i++) {
        count++;
    }return count;
}
 