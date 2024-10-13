#include<stdio.h>

void HotCold(int n);

int main(){

    int n;

    printf("Enter Temperature in Celcius : ");

    scanf("%d",&n);

    HotCold(n);

    return 0;
}

void HotCold(int n){

    if(n>30){

        printf("Hot\n");
    }
    else if(n<=30 && n>=15){

        printf("Warm\n");
    }
    else if(n<15){

        printf("Cold\n");
    }
    return;

}