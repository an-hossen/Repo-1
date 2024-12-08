#include<stdio.h>

struct vectors {

    int x,y;
};

void sum(struct vectors v1,struct vectors v2,struct vectors sm);

int main() {

    struct vectors v1 = {5,3};
    struct vectors v2 = {4,6};
    struct vectors sm = {0};
    sum(v1,v2,sm);
}

void sum(struct vectors v1,struct vectors v2,struct vectors sm) {

    sm.x = v1.x + v2.x;

    sm.y = v1.y + v2.y;

    printf("Sum of x is %d\nSum of y is %d\n",sm.x,sm.y);
 
}