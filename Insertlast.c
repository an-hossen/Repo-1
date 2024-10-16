#include<stdio.h>

#include<stdlib.h>

#include<time.h>

int main(){
    int arr[1000],n,i,elmnt,c;
    
    printf("Enter no. of Elements : ");

    scanf("%d",&n);

    srand(time(NULL));

    printf("The Elements : \n");

    for(i = 0; i<n; i++){

        arr[i] = rand()%100;

        printf("a[%d] = %d\n",i,arr[i]);

    }

    for(; ;){

    printf("Enter The Element : ");

    scanf("%d",&elmnt);

    arr[n] = elmnt;

    n++;
    
    for(i = 0; i<n; i++){


        printf("a[%d] = %d\n",i,arr[i]);

    }

    printf("Press 1 for continue & any key for Exit : ");

    scanf("%d",&c);

    if(c!=1){

        break;
    }

    }

    return 0;
}