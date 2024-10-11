#include<stdio.h>
int main()
{
   int a[1000],i,n,p,v,c;
   printf("\nEnter No. of Elements: ");
   scanf("%d",&n);
   srand(time(NULL));
   for(i=0;i<n;i++)
   {
       a[i]=rand()%100;
       printf("\na[%d] = %d",i,a[i]);
   }
    for(;;){
    printf("\nEnter position : ");
    scanf("%d",&p);
    if(p<n){
    for(i=n;i>p;i--){
       a[i]=a[i-1];
    }
    }
    printf("\nEnter Value : ");
    scanf("%d",&v);
    a[p]=v;
    printf("\nList after add : ");
    n=n+1;
    for(i=0;i<n;i++){
        printf("\na[%d] = %d",i,a[i]);
    }
    printf("\nPress any key for exit and 1 for continue : ");
    scanf("%d",&c);
    if(c!=1)
        break;

    }
    return 0;

}
