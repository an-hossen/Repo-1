#include<stdio.h>

#include<stdlib.h>

#include<time.h>

int main(){
    int arr[1000],n,i;
    
    printf("Enter no. of Elements : ");

    scanf("%d",&n);

    srand(time(NULL));

    printf("The Elements : \n");

    for(i = 0; i<n; i++){

        arr[i] = rand()%100;

        printf("a[%d] = %d\n",i,arr[i]);

    }

    for(i=0; i<n-1; i++){

        if(arr[i]>arr[i+1]){

            arr[i+1] = arr[i];
        }

    }

    printf("The largest in this array %d\n",arr[i]);

    return 0;
}