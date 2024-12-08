#include<stdio.h>
#include<string.h>

struct student {

    char name[1000];

    int roll;

    float cgpa;
};

int main() {

    struct student s1;

    strcpy(s1.name,"Anwar");

    s1.roll = 21;
    
    s1.cgpa = 3.89;

    printf(" Student Name : %s\n Roll : %d\n CGPA : %.2f\n",s1.name,s1.roll,s1.cgpa);

    return 0;
}