#include<stdio.h>
int main(){
    char a;
    printf("Enter character : ");
    scanf("%c",&a);
    if(a>='0' && a<='9'){
        printf("Digit.");
    }
    else
    printf(" Not Digit.");
    return 0;
}