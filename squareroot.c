#include<stdio.h>

double sqrt(double n);

int main(){

    double num;

    printf("Enter your number : ");

    scanf("%lf",&num);

    printf("The square root of your number : %lf\n",sqrt(num));

    return 0;
}

double sqrt(double n){

    double guess = n/2.0;

    double precession = 0.000001;

    while((guess*guess-n > precession) || (n - guess*guess > precession)){

        guess = (guess + n/guess)/2.0;
    }

    return guess;
}