#include<stdio.h>

void max(float *n,float *m);

int main(){

    float a,b;

    printf("Enter Two Numbers : ");

    scanf("%f%f",&a,&b);

    max(&a,&b);

    return 0;
}

void max(float *n,float *m){

    if(*n>*m){
        printf("The First is Maximum.\n");
    }

    else if(*n<*m){
        printf("The Second is Maximum.\n");
    }

    else{
        printf("The Numbers are Equal.\n");
    }
}