#include<stdio.h>
int main(){
    int i,j,m,n,q,s,r;
    for(;;){
    r=0;
    printf(" Enter Range : ");

    scanf("%d %d",&m,&n);

    for(i=m ; i<=n ; i++){
        q=0;
        for(j=2 ;j<=i ;j++){

            if(i%j!=0){

                q++;
            }
        
        }
        if(q==(i-2) || i==2){

            r+=1;

            printf(" %d.  %d\n",r,i);

        }
    }
    printf(" Total Prime Numbers : %d\n",r);

    printf(" Press 1 for Continue & Any key for Exit : ");
    scanf("%d",&s);

    if(s!=1)
    break;
    }

    return 0;

}