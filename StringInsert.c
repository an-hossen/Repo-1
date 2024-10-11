#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char a[1000][1000],N[100];
   int i,n,p,c;
   printf("\nEnter No. of Elements : ");
   scanf("%d",&n);
   printf("\nEnter List \n");
   for(i=0;i<n;i++){
    printf("\na[%d] = ",i);
    scanf("%s",a[i]);
   }
   for(;;){
    printf("\nEnter position : ");
    scanf("%d",&p);
    if(p<n){
        for(i=n;i>p;i--){
            strcpy(a[i],a[i-1]);
        }
    }
        printf("\nEnter Name : ");
        scanf("%s",N);
        strcpy(a[p],N);
        n+=1;
        printf("\nList after adding ");
        for(i=0;i<n;i++){
            printf("\na[%d] = %s",i,a[i]);
        }
        printf("\nPress any key to exit and 1 for continue : ");
        scanf("%d",&c);
        if(c!=1)
            break;
   }
   return 0;
}
