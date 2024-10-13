#include<stdio.h>

int powrfn(int a,int b);

int main(){

    int a,b;

    printf("Enter Base & Power : ");

    scanf("%d%d",&a,&b);

    printf("Value = %d",powrfn(a,b));
    return 0;
}

int powrfn(int a,int b){

    int c = 1;

    for(int i=b; i>0; i--){

        c = c*a;
    }
    return c;
}