#include<stdio.h>

void swap(int *n,int *m);

int main(){

    int a = 5,b = 3; 

    swap(&a,&b);

    printf("a = %d\nb = %d\n",a,b);
    
    return 0;
}

void swap(int *n,int *m){

    int t = *n;

    *n = *m;

    *m = t;
}