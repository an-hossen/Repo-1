#include<stdio.h>

int main(){

    int a[1000],n,i;

    printf("Enetr no. of Elements : ");

    scanf("%d",&n);

    printf("Enter Numbers : \n");

    for(i=1; i<=n; i++){

        scanf("%d",&a[i]);

    }

    printf("In Reverse The Array is : \n");

    for(i=n; i>0; i--){

        printf("a[%d] = %d\n",i,a[i]);

    }
    return 0;
}