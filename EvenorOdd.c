#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
   int a[1000],i,n,Even=0,Odd=0;
   printf("\nEnter No. of Elements: ");
   scanf("%d",&n);
   srand(time(NULL));
   for(i=0;i<n;i++)
   {
       a[i]=rand()%100;
       printf("\na[%d] = %d",i,a[i]);
   }
   printf("\nEven Values : ");
   for(i=0;i<n;i++)
   {
       if(a[i]%2==0){
       printf("\n%d",a[i]);
       Even++;
       }
   }
   printf("\nTotal Even Values : %d",Even);
      printf("\nOdd Values : ");
      for(i=0;i<n;i++)
   {
       if(a[i]%2!=0){
       printf("\n%d",a[i]);
       Odd++;
       }
   }
   printf("\nTotal Odd Values : %d",Odd);
    return 0;

}
