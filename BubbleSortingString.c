#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a[1000],i,j,k,temp,n;
    printf("\nEnter No. of Elements : ");
    scanf("%d",&n);
    srand(time(NULL));
    for(i=0; i<n; i++)
    {    a[i]=rand()%100;
        printf("\na[%d] = %d",i,a[i]);
    }
        for(j=1;j<n;j++)
        {
            printf("\n\n pass %d: \n\n",j);
            for(i=0;i<n-j;i++)
            {
                if(a[i]>a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
                for(k=0;k<n;k++)
                {
                    printf("%d   ",a[k]);
                }
                printf("\n");
            }

        }
    printf("\nSorted list :\n");
    for(i=0;i<n;i++)
    {
        printf("\na[%d] = %d",i,a[i]);
    }
    return 0;
}
