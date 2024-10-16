#include<stdio.h>
#include<string.h>

char slice(char string[]);

int main() {

    char string[100],ch;

    int i;

    printf("Enter Your Main String : ");

    for(i = 0; ch !='\n'; i++){

        scanf("%c",&ch);

        string[i] = ch;

    }

    string[i] = '\0';

    slice(string);

    return 0;
}

char slice(char string[]) {

    int n,m,i,j,len;
    
    len = strlen(string);
    
    printf("%d\n",len);

    char newstring[100];

    printf("Enter Index Range : ");

    scanf("%d%d",&n,&m);

    if((n<len && m<len) && n<m) {

        for(i = n, j=0; i<=m; i++, j++) {

            newstring[j]=string[i];

        }
        newstring[j] = '\0';

        printf("%s\n",newstring);

    }
    
    else{
        
        printf("Your Range is Invalid\n");
    }
}