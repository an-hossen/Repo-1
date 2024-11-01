#include<stdio.h>
#include<string.h>

int main(){
    
    char str[1000];
    
    fgets(str,1000,stdin);
    
    int i,j;
    
    for(i = 0; str[i]!='\0'; i++) {
        
        for(j=65; j<=122;  j++) {
        
            if(str[i] == j) {
            
                if(j<91) {

                    str[i] = 97 + (j-65);
                    break;
                }

                if(j>=97 && j<=122) {

                    str[i] = 65 + (j-97);
                }
            }
        
       }

    }

    puts(str);
    
    return 0;
}