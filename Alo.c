#include <stdio.h>
int main() {
    char s[100][100];
    int a;
    scanf("%d",&a);
    getchar();
    for(int i=0;i<5;i++) {
        scanf("%[^\n]s",s[i]);
        getchar();
    }for(int i=0;i<5;i++) {
        printf("%s\n",s[i]);
    }
    
    return 0;
}