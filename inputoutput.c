#include<stdio.h>
int main () {
    FILE*M;
    M=fopen("d:\\input.txt","r");
    int a[10];
    for(int i=0;i<5;i++) {
        fscanf(M,"%d",&a[i]);
    }
    for(int i=0;i<5;i++) {
        printf("a[%d] = %d\n",i,a[i]);
    }
    fclose(M);
    return 0;
}