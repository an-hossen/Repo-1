#include<stdio.h>
#include<string.h>

int main() {

    char user[1000],salt[] = {"123"},newpass[2000];

    char ch;

    int i;

    printf("Enter Your Password : ");

    for(i = 0; ch != '\n'; i++) {

        scanf("%c",&ch);

        user[i] = ch;
    }

    user[i] = '\0';

    strcpy(newpass,user);

    strcat(newpass,salt);

    for(i=0; newpass[i]!='\0'; i++) {

        printf("%c",newpass[i]);
    }

    return 0;
}