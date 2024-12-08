#include<stdio.h>

#include<string.h>

int main(){

    char str[100],ch;

    int i;

    for(i = 0; ch != '\n'; i++){

        scanf("%c",&ch);

        str[i] = ch;
    }

    str[i] = '\0';

    puts(str);

    return 0;
}