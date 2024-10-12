#include<stdio.h>

int sumdigit(int Numbwe);

int main(){

    int Number;

    printf("Enter Your Number : ");

    scanf("%d",&Number);

    printf("Sum of Digits of Given Number = %d\n",sumdigit(Number));

    return 0;
}

int sumdigit(int n){

     int Modolus,Sum=0;

    for( ; n>0; ){

        Modolus = n%10; //Taking Modolus.

        Sum = Sum + Modolus; //Adding Modolus.
        
        n = n/10;
    }

    return Sum;
};