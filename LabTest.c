#include<stdio.h>

#include<stdlib.h>

#include<time.h>

int a[1000],i,n;

void delete() {
    
    int v,p;
    
    printf("\nEnter Value : ");

    scanf("%d",&v);
    
    for(i=0;i<n;i++) {

        if(v==a[i]) {

        p = i;
        break;
        }
    }
       
    for(i=p;i<n;i++){

        a[i]=a[i+1];
    }
    
    n=n-1;

    printf("\nList after delete : ");

    for(i=0;i<n;i++){

        printf("\na[%d] = %d",i,a[i]);
        
    }
}

void insert () {
    
    int v,p;

    printf("\nEnter Value : ");

    scanf("%d",&v);
    for(i=0;i<n;i++) {

        if(v<=a[i]) {

        p = i;
        break;
        }
    }

    for(i=n;i>p;i--){

       a[i]=a[i-1];
    }

    a[p]=v;

    printf("\nList after add : ");
    
    for(i=0;i<=n;i++){

        printf("\na[%d] = %d",i,a[i]);

    }
}

void sort () {

    int j,k,temp;

    for(j=1;j<n;j++){
        
        for(i=0;i<n-j;i++) {
        
            if(a[i]>a[i+1]) {
                
                temp=a[i];

                a[i]=a[i+1];

                a[i+1]=temp;
            }
            
        }

    }

    printf("\nSorted list :\n");

    for(i=0;i<n;i++) {

        printf("\na[%d] = %d",i,a[i]);

    }
}

void display () {

    FILE*M;

    M=fopen("TextFile.txt","w");

    for(i=0;i<n;i++){

        fprintf(M,"%d\n",a[i]);

    }

    fclose(M);
}

int main() {

    int c;

    printf("\nEnter No. of Elements: ");

    scanf("%d",&n);

    srand(time(NULL));

    for(i=0;i<n;i++){

        a[i]=rand()%100;

        printf("\na[%d] = %d",i,a[i]);
    }

    printf("\nPlease first sort the list by chosing 1.\n");
    
    while(1) {

        printf("\nEnter your choice : \n1.Sort\n2.Insert\n3.Delete\n4.Display in Text File.\n5.Exit\n\n: ");

        scanf("%d",&c);

        switch(c){

            case 1:
            sort();
            break;
            case 2:
            insert();
            break;
            case 3:
            delete();
            break;
            case 4:
            display();
            break;
            case 5:
            exit(0);
            default :
            printf("Invalid Choice\n");
            break;
        }
    
    }
    
    return 0;

}