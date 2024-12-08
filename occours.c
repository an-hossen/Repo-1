#include<stdio.h>

#include<stdlib.h>

#include<time.h>

int main(){

    int a[10000],n,i,count = 0,x;

    printf("Enter no. of Elements : ");

    scanf("%d",&n);
    srand(time(NULL));

    printf("The Elements : \n");

    for(i = 0; i<n; i++){

        a[i] = rand()%10;

        printf("a[%d] = %d\n",i,a[i]);
    }

    printf("what number you count? : ");
    
    scanf("%d",&x);

    for(i=0; i<n; i++){

        if(a[i]==x){

            count++;
        }
    }

    printf("%d  There are %d times in this array.\n",x,count);

    return 0;
}