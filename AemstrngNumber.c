#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c[100],i,j;
    double e=0.0;
    for(;;){
    printf(" Enter Number : ");
    scanf("%d",&b);
    a=b;
    for(i=1;a>0;i++){
        c[i]=a%10;
        a=a/10;
    }
    i--;
    a=i;
    for(;i>0;i--){
        e=e+pow(c[i],a);
    }
    if(e==b)
    printf(" Your Number is Armstrong Number.\n");
    else
    printf(" Not Armstrong.\n");
    printf(" Press 1 to continue & any value to Exit.\n");
    scanf("%d",&j);
    if(j!=1)
    break;
    }
    return 0;
}