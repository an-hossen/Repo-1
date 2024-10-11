#include<stdio.h>
int main(){
    int i,p=0,n,q;
    for(;;){

        printf(" Enter Your Number : ");

        scanf("%d",&n);

        for(i=2; i<n; i++){

            if(n%i==0){

            p++;

            }
        }
        if(p!=0 || n==0 || n==1){

            printf(" Not Prime Number.\n");
        }

    else{ 
        printf(" Prime Number.\n");

    }
    printf(" Press 1 to Continue & Any key for Exit : ");

    scanf("%d",&q);

    if(q!=1){

        break;
    }

    }

    return 0;
}