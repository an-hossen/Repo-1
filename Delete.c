#include<stdio.h>
int main()
{
    FILE*M;
    M=fopen("c:\\BAL.txt","r");
    int a[1000],n,i,p,v,c;
    printf("\nEnter No. of Elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        fscanf(M,"%d",&a[i]);
        printf("\na[%d] = %d",i,a[i]);
    }
    for(;;){
        printf("\n\nEnter Position : ");
        scanf("%d",&p);
        if(p<n){
            for(i=p;i>n;i++){
                a[i]=a[i+1];
            }
            n-=1;
            printf("\nList after delete : ");
            for(i=0;i<n;i++)
                printf("\na[%d] = %d",i,a[i]);
            printf("\nPress any key to exit and 1 for continue : ");
            scanf("%d",&c);
            if(c!=1)
                break;
        }
        else
            printf("\nThat position can't be reach!");
    }
    return 0;
}
