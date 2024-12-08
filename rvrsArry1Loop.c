#include<stdio.h>

void rvrsarry(int a[],int n);

int main(){

    int arr[1000],i,n;

    printf("Enter no. of Elements : ");

    scanf("%d",&n);

    printf("Enter Elements : \n");

    for(i=0; i<n;i++){

        scanf("%d",&arr[i]);
    }
    
    printf("The Riverse is : \n");

    rvrsarry(arr,n);

    return 0;
}

void rvrsarry(int a[],int n){

    for(int i = 0; i<n/2; i++){

        int firstvl = a[i];

        int secondvl = a[n-i-1];

        a[i] = secondvl;

        a[n-i-1] = firstvl;
    }

    for(int i=0; i<n; i++){

        printf("a[%d] = %d",i,a[i]);
    }
}