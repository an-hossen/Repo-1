#include<stdio.h>

int main(){

    int *ptr;

    printf("Capital Letters : \n");

    for(*ptr = 65; *ptr<=90; (*ptr)++){

        printf("%c\n",*ptr);
    }

    printf("Small Letters : \n");

    for(*ptr = 97; *ptr<=122; (*ptr)++){

        printf("%c\n",*ptr);
    }

    return 0;

}