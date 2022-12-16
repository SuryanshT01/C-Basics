# include<stdio.h>

int main() {
    char word;
    printf("Enter first vowel of your name : ");
    scanf("%s",&word );
    switch(word) {
        case 'a' : printf("you are awesome \n");
        break;
        case 'e' : printf("you are energetic \n");
        break;
        case 'i' : printf("you are intelligent \n");
        break;
        case 'o' : printf("you are outstanding \n");
        break;
        case 'u' : printf("you are unbelievable\n");
        break;
        default : printf("enter a vowel not character");

    }
    return 0;
}